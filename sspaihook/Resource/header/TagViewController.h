//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "BaseTableViewController.h"

#import "ArticleShareViewDelegate.h"
#import "LoginViewControllerDelegate.h"

@class NSMutableArray, NSString;

@interface TagViewController : BaseTableViewController <ArticleShareViewDelegate, LoginViewControllerDelegate>
{
    _Bool _isFromHomePage;
    long long _tag_id;
    NSMutableArray *_dataArray;
    NSString *_tag;
    long long _offset;
}

- (void).cxx_destruct;
- (id)URLEncodedString:(id)arg1;
- (void)accusationArticle:(id)arg1;
@property(retain, nonatomic) NSMutableArray *dataArray; // @synthesize dataArray=_dataArray;
- (void)dealloc;
- (void)didReceiveMemoryWarning;
- (void)downloadData;
- (void)favoriteArticle:(id)arg1;
@property(nonatomic) _Bool isFromHomePage; // @synthesize isFromHomePage=_isFromHomePage;
- (void)loadMoreData;
- (long long)numberOfSectionsInTableView:(id)arg1;
@property(nonatomic) long long offset; // @synthesize offset=_offset;
- (void)pushActivityVC:(id)arg1;
- (void)pushRegistVierController:(id)arg1;
- (void)pushVC:(id)arg1;
- (void)setNotification;
@property(copy, nonatomic) NSString *tag; // @synthesize tag=_tag;
@property(nonatomic) long long tag_id; // @synthesize tag_id=_tag_id;
- (void)shareArticle:(id)arg1;
- (void)showAlertView:(id)arg1;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (void)turnToArticleViewController:(id)arg1;
- (void)turnToPersionalViewController:(id)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (void)viewWillAppear:(_Bool)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
