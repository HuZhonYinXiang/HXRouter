//
//  UIViewController+HXDeepLink.h
//  HXRoute
//
//  Created by 胡欣 on 2017/12/19.
//  Copyright © 2017年 胡欣. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "HXRouteSegue.h"

@interface UIViewController (HXDeepLink)

@property (nonatomic, strong) HXRouteSegue *hx_segue;

@end
