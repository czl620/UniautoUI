//
//  UniautoPhoneCodeRow.h
//  UniautoUI
//
//  Created by Chen Zhangli on 2019/1/31.
//  Copyright © 2019年 车微联技术中心 (汽车后市场技术部). All rights reserved.
//

#import "UniautoFormInputRow.h"

@interface UniautoPhoneCodeRow : UniautoFormInputRow

@property(nonatomic, copy) void (^onGetCodeHandler)(UniautoPhoneCodeRow *row, UIButton *button);

@end
