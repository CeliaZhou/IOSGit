//
//  BNRItemStore.h
//  Homepwner
//
//  Created by Admin on 16/1/6.
//  Copyright © 2016年 Admin. All rights reserved.
//

#import <Foundation/Foundation.h>

@class BNRItem;

@interface BNRItemStore : NSObject

@property (nonatomic, readonly) NSArray *allItems;

+ (instancetype)sharedStore;
- (BNRItem *)createItem;

@end
