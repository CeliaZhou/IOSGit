//
//  BNRItem.h
//  RandomItems
//
//  Created by Admin on 15/12/21.
//  Copyright © 2015年 Admin. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface BNRItem : NSObject

@property (nonatomic,copy) NSString *itemName;
@property (nonatomic,copy) NSString *serialNumber;
@property (nonatomic) int valueInDollars;
@property (nonatomic, readonly,strong) NSDate *dateCreated;


+ (instancetype)randomItem;

//Designated initializer for BNRItem
- (instancetype)initWithItemName:(NSString *)name valueInDollars:(int)value serialNumber:(NSString *)sNumber;

- (instancetype)initWithItemName:(NSString *)name;


@end
