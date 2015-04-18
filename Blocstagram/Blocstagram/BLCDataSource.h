//
//  BLCDataSource.h
//  Blocstagram
//
//  Created by kevcol on 4/13/15.
//  Copyright (c) 2015 kevcol inc. All rights reserved.
//

#import <Foundation/Foundation.h>
@class BLCMedia;

@interface BLCDataSource : NSObject

+(instancetype) sharedInstance;

-(void) removeItem:(BLCMedia *)item;

- (NSArray *) mediaItems;

@end
