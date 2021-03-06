//
//  BLCCameraViewController.h
//  Blocstagram
//
//  Created by kevcol on 5/4/15.
//  Copyright (c) 2015 kevcol inc. All rights reserved.
//

#import <UIKit/UIKit.h>

@class BLCCameraViewController;

@protocol BLCCameraViewControllerDelegate <NSObject>

- (void) cameraViewController:(BLCCameraViewController *)cameraViewController didCompleteWithImage:(UIImage *)image;

@end


@interface BLCCameraViewController : UIViewController

@property (nonatomic, weak) NSObject <BLCCameraViewControllerDelegate> *delegate;



@end
