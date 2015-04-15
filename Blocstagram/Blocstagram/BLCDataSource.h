//
//  BLCDataSource.h
//  Blocstagram
//
//  Created by kevcol on 4/13/15.
//  Copyright (c) 2015 kevcol inc. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface BLCDataSource : NSObject

+(instancetype) sharedInstance;

@property (nonatomic, strong, readonly) NSArray *mediaItems;

@end
