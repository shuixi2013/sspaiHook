//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

#import "UITextFieldDelegate.h"

@class CodeLabel, NSString, UIImageView, UITextField;

@interface CodeInputView : UIView <UITextFieldDelegate>
{
    NSString *_backgroudImageName;
    long long _numberOfVertificationCode;
    NSString *_vertificationCode;
    UITextField *_textField;
    UIImageView *_backgroundImageView;
    CodeLabel *_label;
}

- (void).cxx_destruct;
@property(copy, nonatomic) NSString *backgroudImageName; // @synthesize backgroudImageName=_backgroudImageName;
@property(retain, nonatomic) UIImageView *backgroundImageView; // @synthesize backgroundImageView=_backgroundImageView;
- (void)begin;
- (id)initWithFrame:(struct CGRect)arg1;
@property(retain, nonatomic) CodeLabel *label; // @synthesize label=_label;
@property(nonatomic) long long numberOfVertificationCode; // @synthesize numberOfVertificationCode=_numberOfVertificationCode;
@property(retain, nonatomic) UITextField *textField; // @synthesize textField=_textField;
@property(copy, nonatomic) NSString *vertificationCode; // @synthesize vertificationCode=_vertificationCode;
- (_Bool)textField:(id)arg1 shouldChangeCharactersInRange:(struct _NSRange)arg2 replacementString:(id)arg3;
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

