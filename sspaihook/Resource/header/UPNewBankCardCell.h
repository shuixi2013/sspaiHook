//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class NSString, UPBankNumCell;

@interface UPNewBankCardCell : UIView
{
    NSString *bankCard;
    UPBankNumCell *bankCell;
    id <UITextFieldDelegate><UPTextFieldDelegate> mDelegate;
}

- (void).cxx_destruct;
- (double)addBankCardView:(struct CGRect)arg1 data:(id)arg2;
@property(retain, nonatomic) NSString *bankCard; // @synthesize bankCard;
@property(retain, nonatomic) UPBankNumCell *bankCell; // @synthesize bankCell;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1 data:(id)arg2 delegate:(id)arg3;
@property(nonatomic) __weak id <UITextFieldDelegate><UPTextFieldDelegate> mDelegate; // @synthesize mDelegate;
- (void)willRotateToInterfaceOrientation:(long long)arg1 duration:(double)arg2;

@end

