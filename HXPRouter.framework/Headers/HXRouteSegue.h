//
//  HXRouteSegue.h
//  HXRoute
//
//  Created by 胡欣 on 2017/12/19.
//  Copyright © 2017年 胡欣. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <UIKit/UIViewController.h>
#import "HXDefines.h"

@class HXRouteHandler;

@interface HXRouteSegue : NSObject

@property (nonatomic, weak, readonly) HXRouteHandler *handler;

@property (nonatomic, weak, readonly) UIViewController *sourceViewController;

@property (nonatomic, assign, readonly) HXRouteSegueTransitionStyle style;

+(instancetype)segueWithHandler:(HXRouteHandler *)handler sourece:(UIViewController *)source style:(HXRouteSegueTransitionStyle)style;

@end
