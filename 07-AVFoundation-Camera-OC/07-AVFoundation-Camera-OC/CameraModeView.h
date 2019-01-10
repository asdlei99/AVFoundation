//
//  CameraModeView.h
//  07-AVFoundation-Camera-OC
//
//  Created by frank.zhang on 2019/1/8.
//  Copyright © 2019 Frank.zhang. All rights reserved.
//

#import <UIKit/UIKit.h>
typedef NS_ENUM(NSUInteger, CameraMode) {
  CameramodePhoto = 0, //default
  CameraModeVideo = 1
};

@interface CameraModeView : UIControl
@property (nonatomic) CameraMode cameraMode;
@end

