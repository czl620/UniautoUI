//
//  UniautoCheckBox.h
//  UniautoUI
//
//  Created by Chen Zhangli on 2019/7/1.
//  Copyright © 2019 车微联技术中心 (汽车后市场技术部). All rights reserved.
//

#import <UIKit/UIKit.h>

NS_ASSUME_NONNULL_BEGIN

@class UniautoCheckBox;
@protocol UniautoCheckBoxDelegate <NSObject>

@optional
- (void)checkBox:(UniautoCheckBox *)checkBox didChecked:(BOOL)checked;
- (BOOL)checkBox:(UniautoCheckBox *)checkBox shouldInteractWithURL:(NSURL *)URL inRange:(NSRange)characterRange;

@end

@interface UniautoCheckBox : UIView

@property (nonatomic, getter=isChecked) BOOL checked;

@property (nonatomic, strong) UIImage *image;
@property (nonatomic, strong) UIImage *checkedImage;

@property (nonatomic, copy) NSString *text;
@property (nonatomic, strong) UIFont *font;
@property (nonatomic, strong) UIColor *textColor;
@property (nonatomic, copy) NSAttributedString *attributedText;

@property(null_resettable, nonatomic, copy) NSDictionary<NSAttributedStringKey,id> *linkTextAttributes NS_AVAILABLE_IOS(7_0);

@property (nonatomic, weak) id<UniautoCheckBoxDelegate> delegate;

@end

NS_ASSUME_NONNULL_END
