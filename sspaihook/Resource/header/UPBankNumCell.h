//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UPBaseCell.h"

@class NSDictionary;

@interface UPBankNumCell : UPBaseCell
{
    NSDictionary *mRegex;
}

- (void).cxx_destruct;
- (void)dealloc;
- (void)deleteClick;
- (id)getPanPrefixByPan:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1 content:(id)arg2 delegate:(id)arg3;
- (id)initWithFrame:(struct CGRect)arg1 content:(id)arg2 delegate:(id)arg3 lineFlag:(_Bool)arg4 leftTitle:(id)arg5;
- (_Bool)isLegalLength;
@property(retain, nonatomic) NSDictionary *mRegex; // @synthesize mRegex;
- (id)param;
- (void)resetCellWithLabel:(id)arg1 cardNo:(id)arg2 tip:(id)arg3;
- (id)text;
- (void)textChanged:(id)arg1;

@end

