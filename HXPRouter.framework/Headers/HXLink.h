//
//  HXDLLink.h
//  HXRoute
//
//  Created by 胡欣 on 2017/12/19.
//  Copyright © 2017年 胡欣. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <UIKit/UIViewController.h>

NS_ASSUME_NONNULL_BEGIN

FOUNDATION_EXTERN NSString * const HXDLLinkCallbackURLKey;
FOUNDATION_EXTERN NSString * const HXDLLinkSuccessBlockKey;
FOUNDATION_EXTERN NSString * const HXDLLinkFailureBlockKey;

typedef void(^HXDLLinkSuccessBlock)(UIViewController *viewController, NSDictionary *userInfo);
typedef void(^HXDLLinkFailureBlock)(UIViewController *viewController, NSError *error);

@interface HXLink : NSObject<NSCopying>

/*
    表示底层链接的序列化URL;
 */
@property (nonatomic, copy, readonly) NSURL *URL;

/*
    url里面？后带的参数
 */
@property (nonatomic, copy, readonly) NSDictionary *queryParameters;

/*
 url上匹配的参数('alert/:title/:mesage' and a path 'botton://alert/hello/world',the routeParameters would be @{@"title":@"hello",@"message":@"world"}})
 */
@property (nonatomic, readonly) NSDictionary *routeParameters;

/*
原生参数(即URL所有参数)
 */
@property (nonatomic, readonly) NSDictionary *parameters;

/*
 链接到源应用程序的底层链接URL
 回调可以指定在你的底层链接的URL的hx_callback_url参数如下
 */
@property (nonatomic, strong, readonly) NSURL *callbackURL;

- (instancetype)initWithURL:(NSURL *)url;

- (BOOL)isEqualtoLink:(nullable HXLink *)link;

- (nullable id)objectForKeyedSubscript:(NSString *)key;

- (void)setObject:(nullable id)obj forKeyedSubscript:(NSString *)key;

/*
 添加附加参数
 
 @param parameters 附加参数
 */
- (void)appendParameters:(NSDictionary *)parameters;

@end

NS_ASSUME_NONNULL_END
