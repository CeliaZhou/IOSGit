//
//  ViewController.m
//  TouchTracker
//
//  Created by Admin on 16/1/14.
//  Copyright © 2016年 Admin. All rights reserved.
//

#import "BNRDrawViewController.h"
#import "BNRDrawView.h"

@interface BNRDrawViewController ()

@end

@implementation BNRDrawViewController

- (void)loadView
{
    self.view = [[BNRDrawView alloc] initWithFrame:CGRectZero];
}

@end
