/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/MediaPlayerUI.framework/MediaPlayerUI
 */

@class IKLockupElement, MPUContentSizeLayoutConstraint, MPUExtrasConstrainedArtworkContainerView, NSLayoutConstraint, UILabel, UIView;

@interface MPUExtrasGridCollectionViewCell : UICollectionViewCell {
    MPUExtrasConstrainedArtworkContainerView *_artworkContainer;
    NSLayoutConstraint *_artworkContainerHeightConstraint;
    NSLayoutConstraint *_artworkContainerWidthConstraint;
    IKLockupElement *_lockupElement;
    MPUContentSizeLayoutConstraint *_spacerHeight;
    NSLayoutConstraint *_spacerTop;
    UIView *_spacerView;
    UILabel *_subtitleLabel;
    MPUContentSizeLayoutConstraint *_subtitleLineHeight;
    UILabel *_titleLabel;
    MPUContentSizeLayoutConstraint *_topLineHeight;
}

@property(readonly) MPUExtrasConstrainedArtworkContainerView * artworkContainer;
@property IKLockupElement * lockupElement;
@property(retain) UILabel * subtitleLabel;
@property(retain) UILabel * titleLabel;

- (void).cxx_destruct;
- (id)artworkContainer;
- (void)configureForLockup:(id)arg1 cellStyle:(id)arg2 withSizing:(bool)arg3;
- (void)configureForLockup:(id)arg1 cellStyle:(id)arg2;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (id)lockupElement;
- (void)prepareForReuse;
- (void)setHighlighted:(bool)arg1;
- (void)setLockupElement:(id)arg1;
- (void)setSubtitleLabel:(id)arg1;
- (void)setTitleLabel:(id)arg1;
- (id)subtitleLabel;
- (id)titleLabel;

@end