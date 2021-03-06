//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class CALayer, NSTimer, SVProgressAnimatedView, UIColor, UIControl, UIFont, UIImage, UIImageView, UILabel;

@interface SVProgressHUD : UIView
{
    _Bool _isInitializing;
    long long _defaultStyle;
    unsigned long long _defaultMaskType;
    unsigned long long _defaultAnimationType;
    double _ringThickness;
    double _ringRadius;
    double _ringNoTextRadius;
    double _cornerRadius;
    UIFont *_font;
    UIColor *_backgroundColor;
    UIColor *_foregroundColor;
    UIColor *_backgroundLayerColor;
    UIImage *_infoImage;
    UIImage *_successImage;
    UIImage *_errorImage;
    UIView *_viewForExtension;
    double _minimumDismissTimeInterval;
    double _fadeInAnimationDuration;
    double _fadeOutAnimationDuration;
    NSTimer *_fadeOutTimer;
    UIControl *_overlayView;
    UIView *_hudView;
    UILabel *_statusLabel;
    UIImageView *_imageView;
    UIView *_indefiniteAnimatedView;
    SVProgressAnimatedView *_ringView;
    SVProgressAnimatedView *_backgroundRingView;
    CALayer *_backgroundLayer;
    double _progress;
    unsigned long long _activityCount;
    struct CGSize _minimumSize;
    struct UIOffset _offsetFromCenter;
}

+ (void)dismiss;
+ (void)dismissWithDelay:(double)arg1;
+ (double)displayDurationForString:(id)arg1;
+ (_Bool)isVisible;
+ (void)popActivity;
+ (void)resetOffsetFromCenter;
+ (void)setBackgroundColor:(id)arg1;
+ (void)setBackgroundLayerColor:(id)arg1;
+ (void)setCornerRadius:(double)arg1;
+ (void)setDefaultAnimationType:(unsigned long long)arg1;
+ (void)setDefaultMaskType:(unsigned long long)arg1;
+ (void)setDefaultStyle:(long long)arg1;
+ (void)setErrorImage:(id)arg1;
+ (void)setFadeInAnimationDuration:(double)arg1;
+ (void)setFadeOutAnimationDuration:(double)arg1;
+ (void)setFont:(id)arg1;
+ (void)setForegroundColor:(id)arg1;
+ (void)setInfoImage:(id)arg1;
+ (void)setMinimumDismissTimeInterval:(double)arg1;
+ (void)setMinimumSize:(struct CGSize)arg1;
+ (void)setOffsetFromCenter:(struct UIOffset)arg1;
+ (void)setRingNoTextRadius:(double)arg1;
+ (void)setRingRadius:(double)arg1;
+ (void)setRingThickness:(double)arg1;
+ (void)setStatus:(id)arg1;
+ (void)setSuccessImage:(id)arg1;
+ (void)setViewForExtension:(id)arg1;
+ (id)sharedView;
+ (void)show;
+ (void)showErrorWithStatus:(id)arg1;
+ (void)showErrorWithStatus:(id)arg1 maskType:(unsigned long long)arg2;
+ (void)showImage:(id)arg1 status:(id)arg2;
+ (void)showImage:(id)arg1 status:(id)arg2 maskType:(unsigned long long)arg3;
+ (void)showInfoWithStatus:(id)arg1;
+ (void)showInfoWithStatus:(id)arg1 maskType:(unsigned long long)arg2;
+ (void)showProgress:(float)arg1;
+ (void)showProgress:(float)arg1 maskType:(unsigned long long)arg2;
+ (void)showProgress:(float)arg1 status:(id)arg2;
+ (void)showProgress:(float)arg1 status:(id)arg2 maskType:(unsigned long long)arg3;
+ (void)showSuccessWithStatus:(id)arg1;
+ (void)showSuccessWithStatus:(id)arg1 maskType:(unsigned long long)arg2;
+ (void)showWithMaskType:(unsigned long long)arg1;
+ (void)showWithStatus:(id)arg1;
+ (void)showWithStatus:(id)arg1 maskType:(unsigned long long)arg2;
- (void).cxx_destruct;
@property(nonatomic) unsigned long long activityCount; // @synthesize activityCount=_activityCount;
@property(retain, nonatomic) UIColor *backgroundColor; // @synthesize backgroundColor=_backgroundColor;
- (id)backgroundColorForStyle;
@property(retain, nonatomic) CALayer *backgroundLayer; // @synthesize backgroundLayer=_backgroundLayer;
@property(retain, nonatomic) UIColor *backgroundLayerColor; // @synthesize backgroundLayerColor=_backgroundLayerColor;
@property(retain, nonatomic) SVProgressAnimatedView *backgroundRingView; // @synthesize backgroundRingView=_backgroundRingView;
- (void)cancelIndefiniteAnimatedViewAnimation;
- (void)cancelRingLayerAnimation;
@property(nonatomic) double cornerRadius; // @synthesize cornerRadius=_cornerRadius;
@property(nonatomic) unsigned long long defaultAnimationType; // @synthesize defaultAnimationType=_defaultAnimationType;
@property(nonatomic) unsigned long long defaultMaskType; // @synthesize defaultMaskType=_defaultMaskType;
@property(nonatomic) long long defaultStyle; // @synthesize defaultStyle=_defaultStyle;
- (void)dismiss;
- (void)dismissWithDelay:(double)arg1;
@property(retain, nonatomic) UIImage *errorImage; // @synthesize errorImage=_errorImage;
@property(nonatomic) double fadeInAnimationDuration; // @synthesize fadeInAnimationDuration=_fadeInAnimationDuration;
@property(nonatomic) double fadeOutAnimationDuration; // @synthesize fadeOutAnimationDuration=_fadeOutAnimationDuration;
@property(readonly, nonatomic) NSTimer *fadeOutTimer; // @synthesize fadeOutTimer=_fadeOutTimer;
@property(retain, nonatomic) UIFont *font; // @synthesize font=_font;
@property(retain, nonatomic) UIColor *foregroundColor; // @synthesize foregroundColor=_foregroundColor;
- (id)foregroundColorForStyle;
@property(retain, nonatomic) UIView *hudView; // @synthesize hudView=_hudView;
- (id)image:(id)arg1 withTintColor:(id)arg2;
@property(retain, nonatomic) UIImageView *imageView; // @synthesize imageView=_imageView;
@property(retain, nonatomic) UIView *indefiniteAnimatedView; // @synthesize indefiniteAnimatedView=_indefiniteAnimatedView;
@property(retain, nonatomic) UIImage *infoImage; // @synthesize infoImage=_infoImage;
- (id)initWithFrame:(struct CGRect)arg1;
@property(readonly, nonatomic, getter=isClear) _Bool clear;
@property(nonatomic) double minimumDismissTimeInterval; // @synthesize minimumDismissTimeInterval=_minimumDismissTimeInterval;
@property(nonatomic) struct CGSize minimumSize; // @synthesize minimumSize=_minimumSize;
- (void)moveToPoint:(struct CGPoint)arg1 rotateAngle:(double)arg2;
- (id)notificationUserInfo;
@property(nonatomic) struct UIOffset offsetFromCenter; // @synthesize offsetFromCenter=_offsetFromCenter;
@property(retain, nonatomic) UIControl *overlayView; // @synthesize overlayView=_overlayView;
- (void)overlayViewDidReceiveTouchEvent:(id)arg1 forEvent:(id)arg2;
- (void)positionHUD:(id)arg1;
@property(nonatomic) double progress; // @synthesize progress=_progress;
- (void)registerNotifications;
@property(nonatomic) double ringNoTextRadius; // @synthesize ringNoTextRadius=_ringNoTextRadius;
@property(nonatomic) double ringRadius; // @synthesize ringRadius=_ringRadius;
@property(nonatomic) double ringThickness; // @synthesize ringThickness=_ringThickness;
@property(retain, nonatomic) SVProgressAnimatedView *ringView; // @synthesize ringView=_ringView;
- (void)setFadeOutTimer:(id)arg1;
- (void)setStatus:(id)arg1;
@property(retain, nonatomic) UILabel *statusLabel; // @synthesize statusLabel=_statusLabel;
@property(retain, nonatomic) UIImage *successImage; // @synthesize successImage=_successImage;
@property(retain, nonatomic) UIView *viewForExtension; // @synthesize viewForExtension=_viewForExtension;
- (void)showImage:(id)arg1 status:(id)arg2 duration:(double)arg3;
- (void)showProgress:(float)arg1 status:(id)arg2;
- (void)showStatus:(id)arg1;
- (void)updateBlurBounds;
- (void)updateHUDFrame;
- (void)updateMask;
- (void)updateMotionEffectForOrientation:(long long)arg1;
- (void)updateMotionEffectForXMotionEffectType:(long long)arg1 yMotionEffectType:(long long)arg2;
- (void)updateViewHierachy;
@property(readonly, nonatomic) double visibleKeyboardHeight;

@end

