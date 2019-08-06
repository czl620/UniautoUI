//
//  UIDevice+uniauto.h
//  UniautoUI
//
//  Created by Chen Zhangli on 2018/1/18.
//  Copyright © 2018年 车微联技术中心 (汽车后市场技术部). All rights reserved.
//

#import <UIKit/UIKit.h>

typedef NS_ENUM(NSUInteger, UniautoScreenInch) {
    UniautoScreenInch35 = 35,
    UniautoScreenInch40 = 40,
    UniautoScreenInch47 = 47,
    UniautoScreenInch55 = 55,
    UniautoScreenInch58 = 58,
    UniautoScreenInch61 = 61,
    UniautoScreenInch65 = 65,
    UniautoScreenInchPad = 0,
};

@interface UIDevice (uniauto)

/**
 设备唯一标识符
 */
@property (nonatomic, copy, readonly) NSString *deviceId;

/**
 手机屏幕尺寸
 */
- (UniautoScreenInch)screenInch;

- (BOOL)isPad;

/**
 打电话

 @param mobile 电话号码
 */
- (void)tel:(NSString *)mobile;
- (void)tels:(NSArray <NSString *> *)mobiles;

@end
