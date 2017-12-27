//
//  HXDefines.h
//  HXRoute
//
//  Created by 胡欣 on 2017/12/19.
//  Copyright © 2017年 胡欣. All rights reserved.
//

#import <Foundation/Foundation.h>

FOUNDATION_EXTERN NSString * const HXErrorDomain;

typedef NS_ENUM(NSUInteger, HXErrorCode){
    HXRouteNotFoundError = 40041,
    HXRouteHandlerTargetNotSpecifiedError = 40042,
    HXRouteRedirectionURLError = 40043,
};

typedef NS_ENUM(NSUInteger, HXROuteHandlerTransitionStyle) {
    HXROuteHandlerTransitionStylePush,
    HXROuteHandlerTransitionStylePresentation,
    HXROuteHandlerTransitionStyleCustom,
};

typedef NS_ENUM(NSUInteger, HXRouteSegueTransitionStyle) {
    HXRouteSegueTransitionStylePush = HXROuteHandlerTransitionStylePush,
    HXRouteSegueTransitionStylePresentation = HXROuteHandlerTransitionStylePresentation,
    HXRouteSegueTransitionStyleCustom = HXROuteHandlerTransitionStyleCustom,
};
