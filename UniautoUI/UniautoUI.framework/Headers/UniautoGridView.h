//
//  UniautoGridView.h
//  UniautoUI
//
//  Created by Chen Zhangli on 2019/3/5.
//  Copyright © 2019 车微联技术中心 (汽车后市场技术部). All rights reserved.
//

#import <UIKit/UIKit.h>

NS_ASSUME_NONNULL_BEGIN

@class UniautoGridView;
@class UniautoGridViewCell;

@protocol UniautoGridViewDataSource <NSObject>

@required
- (NSInteger)numberOfItemsInGridView:(UniautoGridView *)view;
- (NSInteger)numberOfColumnsInGridView:(UniautoGridView *)view;
- (UniautoGridViewCell *)gridView:(UniautoGridView *)gridView cellForItemAtIndex:(NSInteger)index;

@optional
- (CGFloat)heightForItemInGridView:(UniautoGridView *)gridView;
- (CGFloat)marginForItemInGridView:(UniautoGridView *)gridView;

@end

@protocol UniautoGridViewDelegate <NSObject>

@optional
- (void)gridView:(UniautoGridView *)gridView didSelectItemAtIndex:(NSInteger)index;

@end

@interface UniautoGridView : UIView

@property (nonatomic, weak) id<UniautoGridViewDataSource> dataSource;
@property (nonatomic, weak) id<UniautoGridViewDelegate> delegate;

-(void)reloadData;

@end

@interface UniautoGridViewCell : UIView

@property (nonatomic, strong) UIView *contentView;

@end

NS_ASSUME_NONNULL_END
