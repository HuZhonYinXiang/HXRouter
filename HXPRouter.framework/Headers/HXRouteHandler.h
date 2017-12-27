//
//  HXRouteHandler.h
//  HXRoute
//
//  Created by 胡欣 on 2017/12/19.
//  Copyright © 2017年 胡欣. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "HXDefines.h"

@class HXLink;
@class UIViewController;

@interface HXRouteHandler : NSObject

- (HXROuteHandlerTransitionStyle)style;

- (UIViewController *)targetViewControllerWithDeepLink:(HXLink *)deepLink source:(UIViewController *)sourceViewController error:(NSError *__autoreleasing *)error;

//- (void)showViewController:(UIViewController *)targetViewController source:(UIViewController *)sourceViewController;

- (void)showViewController:(UIViewController *)targetViewController source:(UIViewController *)sourceViewController deepLink:(HXLink *)deepLink;

- (void)closeViewController:(UIViewController *)targetViewController sender:(id)sender;

@end
