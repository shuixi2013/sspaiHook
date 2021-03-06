//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIViewController.h"

#import "UIScrollViewDelegate.h"
#import "UITextFieldDelegate.h"
#import "UPAlertViewExDelegate.h"
#import "UPMPServiceDelegate.h"
#import "UPPromotionViewDelegate.h"
#import "UPPullListViewDelegate.h"
#import "UPTextFieldDelegate.h"

@class NSDictionary, NSMutableArray, NSString, UIButton, UIScrollView, UITextField, UIView, UPADBar, UPAlertViewEx, UPMPServiceConsumption, UPNavigationBar, UPPaymentElementsView, UPPromotionView, UPPullListView;

@interface UPBaseViewController : UIViewController <UPAlertViewExDelegate, UITextFieldDelegate, UPTextFieldDelegate, UPPullListViewDelegate, UPMPServiceDelegate, UPPromotionViewDelegate, UIScrollViewDelegate>
{
    _Bool mNeedBack;
    _Bool mClientMustBeTerminated;
    UITextField *mFocusTextField;
    UIScrollView *mScrollView;
    UPAlertViewEx *mAlertView;
    UPAlertViewEx *mPromotionAndInstalmentAlertView;
    UIButton *mRightBtn;
    UIButton *mBtnNext;
    double mYOffset;
    UPPaymentElementsView *_paymentElementsView;
    UPNavigationBar *_navigationBar;
    struct CGRect _scrollViewFrame;
    UIButton *_openButton;
    UIView *_statusBarBackgroundView;
    UPMPServiceConsumption *_UPMPService;
    UPADBar *_adBar;
    NSDictionary *_promotion;
    NSDictionary *_instalment;
    UPPromotionView *_promotionView;
    UPPromotionView *_instalmentView;
    _Bool _keyboardWillHidden;
    UPADBar *_warningBar;
    UIView *_barBackgroundView;
    struct CGRect _barBackgroundViewFrame;
    NSMutableArray *mTextFieldsArray;
    UPPullListView *pullListView;
    NSString *curParams;
}

- (void).cxx_destruct;
- (void)addAdBar;
- (void)addBtnNextWithTitle:(id)arg1 frame:(struct CGRect)arg2 enabled:(_Bool)arg3 onView:(id)arg4;
- (void)addContentScrollView;
- (void)addNavigationBar;
- (double)addOrderView:(struct CGRect)arg1;
- (double)addOrderViewWithStyle:(long long)arg1;
- (void)addSubViews;
- (id)alertBox;
- (void)backAction:(id)arg1;
- (void)buttonCancelClicked;
- (void)buttonOKClicked;
- (_Bool)canEnableNextButton;
- (void)checkBoxHref:(id)arg1 title:(id)arg2;
- (_Bool)checkPaymentParams;
- (_Bool)checkSmsParams;
- (void)checkTextFieldClear:(id)arg1;
- (void)cleanAlertBox;
- (void)cleanSecretParams;
- (void)comunicateToUPMPDidFailWithErrorType:(long long)arg1 error:(id)arg2;
- (void)comunicateToUPMPDidSucceedWithEvent:(long long)arg1;
- (void)comunicateToUPMPDidSucceedWithEvent:(long long)arg1 data:(id)arg2;
- (id)createBackgroundColor;
@property(copy, nonatomic) NSString *curParams; // @synthesize curParams;
- (void)dealloc;
- (void)dismissAlertView;
- (void)exitWithResult:(id)arg1;
- (id)floatValueInTextField:(id)arg1 range:(struct _NSRange)arg2 string:(id)arg3;
- (void)handleAlertBoxWithCancelAction:(SEL)arg1 actionStr:(id)arg2;
- (void)handleAlertBoxWithDefaultAction:(SEL)arg1;
- (void)initTextFieldArray;
- (void)initUPMPService;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (void)keyBoardWillChangeFrame:(id)arg1;
- (void)keyboareWillHide:(id)arg1;
- (void)listView:(id)arg1 DidSelectedAtIndex:(long long)arg2;
@property(retain, nonatomic) NSMutableArray *mTextFieldsArray; // @synthesize mTextFieldsArray;
- (double)makeInstalmentViewAtY:(double)arg1;
- (double)makePromotionViewAtY:(double)arg1;
- (void)nextAction:(id)arg1;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (id)paymentParams;
- (void)postSmsMessage:(id)arg1;
- (long long)preferredStatusBarStyle;
- (void)promotionViewWillChange:(id)arg1;
- (void)pullListAnimationDidStart:(double)arg1;
@property(retain, nonatomic) UPPullListView *pullListView; // @synthesize pullListView;
- (void)resetStatusBar;
- (void)scrollViewDidScroll:(id)arg1;
- (void)setColors:(id)arg1;
- (void)showAlertViewWithMessage:(id)arg1;
- (void)showAlertViewWithTitle:(id)arg1 msg:(id)arg2 btnCancel:(id)arg3 btnOK:(id)arg4;
- (void)showAlertWithAlertBox:(id)arg1 actionBlock:(CDUnknownBlockType)arg2;
- (void)showLoadingAlertView;
- (void)smsCodeAction:(id)arg1;
- (void)smsCodeSucceed;
- (id)smsParams;
- (_Bool)textField:(id)arg1 shouldChangeCharactersInRange:(struct _NSRange)arg2 replacementString:(id)arg3;
- (void)textFieldChangeType:(long long)arg1;
- (void)textFieldDidBeginEditing:(id)arg1;
- (_Bool)textFieldShouldClear:(id)arg1;
- (_Bool)textFieldShouldEndEditing:(id)arg1;
- (void)textFieldWillChange:(id)arg1;
- (void)viewController:(id)arg1 presentModalViewController:(id)arg2;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (void)viewDidUnload;
- (void)viewWillTransitionToSize:(struct CGSize)arg1 withTransitionCoordinator:(id)arg2;
- (void)willRotateToInterfaceOrientation:(long long)arg1 duration:(double)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

