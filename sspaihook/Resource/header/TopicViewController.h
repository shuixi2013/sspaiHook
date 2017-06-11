//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "BaseTableViewController.h"

#import "ArticleShareViewDelegate.h"
#import "LoginViewControllerDelegate.h"
#import "TopicHeaderViewDelegate.h"

@class NSMutableArray, NSString, TopicHeaderView, TopicModel, UIActivityIndicatorView, UIButton;

@interface TopicViewController : BaseTableViewController <LoginViewControllerDelegate, ArticleShareViewDelegate, TopicHeaderViewDelegate>
{
    NSString *_ID;
    TopicModel *_topic;
    TopicHeaderView *_headerView;
    NSMutableArray *_dataArray;
    UIActivityIndicatorView *_actiView;
    UIButton *_favButton;
}

- (void).cxx_destruct;
@property(copy, nonatomic) NSString *ID; // @synthesize ID=_ID;
- (void)accusationArticle:(id)arg1;
@property(nonatomic) __weak UIActivityIndicatorView *actiView; // @synthesize actiView=_actiView;
@property(retain, nonatomic) NSMutableArray *dataArray; // @synthesize dataArray=_dataArray;
- (void)didReceiveMemoryWarning;
@property(nonatomic) __weak UIButton *favButton; // @synthesize favButton=_favButton;
- (void)favoriteArticle:(id)arg1;
- (void)favriteTopic:(id)arg1;
@property(nonatomic) __weak TopicHeaderView *headerView; // @synthesize headerView=_headerView;
- (id)initWithTopic:(id)arg1;
- (void)loadMoreData;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (void)pushActivityVC:(id)arg1;
- (void)pushArticleViewController:(id)arg1;
- (void)pushLoginViewController;
- (void)pushPersonalHomeViewController:(id)arg1;
- (void)pushRegistVierController:(id)arg1;
- (void)scrollViewDidScroll:(id)arg1;
- (void)setNavigationBar;
@property(retain, nonatomic) TopicModel *topic; // @synthesize topic=_topic;
- (void)shareArticle:(id)arg1;
- (void)shareTopic;
- (void)showAlertView:(id)arg1;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewWillDisappear:(_Bool)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
