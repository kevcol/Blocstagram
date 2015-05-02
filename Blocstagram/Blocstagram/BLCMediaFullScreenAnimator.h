//
//  BLCMediaFullScreenAnimator.h
//  Blocstagram
//
//  Created by kevcol on 4/25/15.
//  Copyright (c) 2015 kevcol inc. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>

@interface BLCMediaFullScreenAnimator : NSObject <UIViewControllerAnimatedTransitioning>

@property (nonatomic, assign) BOOL presenting;
@property (nonatomic, weak) UIImageView *cellImageView;

@end
