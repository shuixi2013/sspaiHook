//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UICollectionViewCell.h"

@class AdvertisementModel, UIImage, UIImageView;

@interface MatrixHeaderViewCell : UICollectionViewCell
{
    AdvertisementModel *_model;
    UIImage *_image;
    UIImageView *_bigImage;
}

- (void).cxx_destruct;
- (void)awakeFromNib;
@property(nonatomic) __weak UIImageView *bigImage; // @synthesize bigImage=_bigImage;
@property(retain, nonatomic) UIImage *image; // @synthesize image=_image;
@property(retain, nonatomic) AdvertisementModel *model; // @synthesize model=_model;

@end

