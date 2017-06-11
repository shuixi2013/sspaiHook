//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class SpecialColumnModel, UIButton, UIImageView, UILabel;

@interface ColumnHeaderView : UIView
{
    SpecialColumnModel *_column;
    UIImageView *_imageView;
    UILabel *_columnLabel;
    UILabel *_nameLabel;
    UIButton *_attentionButton;
    UIButton *_iconButton;
    UILabel *_chiefEditorLabel;
    UILabel *_chiefEditorDescLabel;
    UILabel *_editorLabel;
    UILabel *_editorNumLabel;
    UILabel *_authorLabel;
    UILabel *_authorNumLabel;
    UIButton *_aboutButton;
    UIImageView *_avatarImage;
}

- (void).cxx_destruct;
@property(nonatomic) __weak UIButton *aboutButton; // @synthesize aboutButton=_aboutButton;
- (void)aboutButtonAction:(id)arg1;
@property(nonatomic) __weak UIButton *attentionButton; // @synthesize attentionButton=_attentionButton;
- (void)attentionButtonAction:(id)arg1;
@property(nonatomic) __weak UILabel *authorLabel; // @synthesize authorLabel=_authorLabel;
@property(nonatomic) __weak UILabel *authorNumLabel; // @synthesize authorNumLabel=_authorNumLabel;
@property(nonatomic) __weak UIImageView *avatarImage; // @synthesize avatarImage=_avatarImage;
@property(nonatomic) __weak UILabel *chiefEditorDescLabel; // @synthesize chiefEditorDescLabel=_chiefEditorDescLabel;
@property(nonatomic) __weak UILabel *chiefEditorLabel; // @synthesize chiefEditorLabel=_chiefEditorLabel;
@property(retain, nonatomic) SpecialColumnModel *column; // @synthesize column=_column;
@property(nonatomic) __weak UILabel *columnLabel; // @synthesize columnLabel=_columnLabel;
@property(nonatomic) __weak UILabel *editorLabel; // @synthesize editorLabel=_editorLabel;
@property(nonatomic) __weak UILabel *editorNumLabel; // @synthesize editorNumLabel=_editorNumLabel;
@property(nonatomic) __weak UIButton *iconButton; // @synthesize iconButton=_iconButton;
- (void)iconButtonAction:(id)arg1;
@property(nonatomic) __weak UIImageView *imageView; // @synthesize imageView=_imageView;
@property(nonatomic) __weak UILabel *nameLabel; // @synthesize nameLabel=_nameLabel;

@end
