//
//  BLCMediaTableViewCell.h
//  Blocstagram
//
//  Created by kevcol on 4/15/15.
//  Copyright (c) 2015 kevcol inc. All rights reserved.
//

#import <UIKit/UIKit.h>
@class BLCMedia;

@interface BLCMediaTableViewCell : UITableViewCell
    @property (nonatomic, strong) BLCMedia *mediaItem;

+(CGFloat) heightForMediaItem:(BLCMedia *)mediaItem width:(CGFloat)width;

@end
