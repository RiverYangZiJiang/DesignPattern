//
//  PenFactory.h
//  DesignModeDemo
//
//  Created by koala on 2018/4/13.
//  Copyright © 2018年 koala. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "Pen.h"

/**
 笔的类型

 - PenTypePencil: 铅笔
 - PenTypeBallpointPen: 圆珠笔
 - PenTypeNone: <#PenTypeNone description#>
 */
typedef NS_ENUM(NSUInteger, PenType) {
    PenTypePencil,
    PenTypeBallpointPen,
    PenTypeNone,
};

@interface PenFactory : NSObject

/**
 创建笔的工厂方法

 @param penType 笔类型
 @return 笔对象
 */
+ (Pen *)penFactory:(PenType)penType;

@end
