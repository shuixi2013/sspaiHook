//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "GrowingWindowView.h"

@class UIControl, UILabel;

@interface GrowingStatusBar : GrowingWindowView
{
    UILabel *_statusLable;
    CDUnknownBlockType _onButtonClick;
    UIControl *_btn;
}

- (void).cxx_destruct;
@property(retain, nonatomic) UIControl *btn; // @synthesize btn=_btn;
- (_Bool)growingNodeIsBadNode;
- (id)hitTest:(struct CGPoint)arg1 withEvent:(id)arg2;
- (id)initWithFrame:(struct CGRect)arg1;
@property(copy, nonatomic) CDUnknownBlockType onButtonClick; // @synthesize onButtonClick=_onButtonClick;
@property(retain, nonatomic) UILabel *statusLable; // @synthesize statusLable=_statusLable;

@end
