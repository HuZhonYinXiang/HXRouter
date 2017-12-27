//
//  HXDLMatchResult.h
//  HXRoute
//
//  Created by 胡欣 on 2017/12/19.
//  Copyright © 2017年 胡欣. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface HXMatchResult : NSObject

@property (nonatomic, assign, getter=isMatch) BOOL match;
@property (nonatomic, strong) NSDictionary *namedProperties;

@end
