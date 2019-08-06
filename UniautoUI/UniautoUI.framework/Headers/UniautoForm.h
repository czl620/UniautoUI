//
//  UniautoForm.h
//  UniautoUI
//
//  Created by Chen Zhangli on 2018/1/16.
//  Copyright © 2018年 车微联技术中心 (汽车后市场技术部). All rights reserved.
//

#import <Foundation/Foundation.h>
#import <UniautoUI/UniautoFormSection.h>
#import <UniautoUI/UniautoFormCell.h>

@interface UniautoForm : NSObject

- (instancetype)initWithTableView:(UITableView *)tableView;

@property(nonatomic, strong) NSMutableArray <UniautoFormSection *> *sections;

- (UniautoFormSection *)addSection:(UniautoFormSection *)section;
- (void)addSubmit:(UIButton *)button;
- (void)addSubmits:(NSArray<UIButton *> *)buttons;
- (void)reloadData;

- (NSDictionary *)toDictionary;

- (id)objectForKeyedSubscript:(id <NSCopying>)key;
- (void)setObject:(id)obj forKeyedSubscript:(id <NSCopying>)key;

@end
