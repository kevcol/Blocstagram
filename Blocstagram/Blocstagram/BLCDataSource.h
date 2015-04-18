//
//  BLCDataSource.h
//  Blocstagram
//
//  Created by kevcol on 4/13/15.
//  Copyright (c) 2015 kevcol inc. All rights reserved.
//

#import <Foundation/Foundation.h>
@class BLCMedia;

typedef void (^BLCNewItemCompletionBlock)(NSError *error);

@interface BLCDataSource : NSObject

+(instancetype) sharedInstance;

- (void) deleteMediaItem:(BLCMedia *)item;

- (void) requestNewItemsWithCompletionHandler:(BLCNewItemCompletionBlock)completionHandler;
- (void) requestOldItemsWithCompletionHandler:(BLCNewItemCompletionBlock)completionHandler;

- (NSArray *) mediaItems;

@end
