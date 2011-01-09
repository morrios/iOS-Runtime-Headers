/* Generated by RuntimeBrowser on iPhone OS 4.2.1
   Image: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

@class UIImageView, UIView;



@interface MPVideoBackgroundView : UIView 
{
    NSInteger _interfaceOrientation;
    UIImageView *_imageView;
    UIImageView *_iconView;
    UIImageView *_customBackgroundImageView;
    UIImageView *_backgroundPlaceholderView;
    UIImageView *_backgroundPlaceholderImageView;
    UIView *_backgroundPlaceholderPosterImageView;
}

@property(retain) UIImage *backgroundPlaceholderImage;
@property(readonly) UIView *backgroundPlaceholderView;
@property(retain) UIView *backgroundPlaceholderPosterImageView;
@property NSInteger interfaceOrientation;

+ (void)_initializeSafeCategory;

- (void)setInterfaceOrientation:(NSInteger)arg1;
- (NSInteger)interfaceOrientation;
- (id)initWithFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (void)dealloc;
- (void)layoutSubviews;
- (id)qtIcon;
- (void)_createInformationalTitleView:(id*)arg1 systemFont:(id)arg2 lineBreakMode:(NSInteger)arg3;
- (void)_destinationDidChangeNotification:(id)arg1;
- (void)_tvOutCapabilityDidChangeNotification:(id)arg1;
- (void)_updateDestinationBackgroundViewAnimated:(BOOL)arg1;
- (void)setBackgroundPlaceholderPosterImageView:(id)arg1;
- (id)backgroundPlaceholderPosterImageView;
- (void)setCustomBackgroundImage:(id)arg1;
- (void)setShowQTAudioOnlyUI:(BOOL)arg1;
- (void)setBackgroundPlaceholderImage:(id)arg1;
- (id)backgroundPlaceholderImage;
- (id)backgroundPlaceholderView;
- (void)_playbackStateDidChangeNotification:(id)arg1;
- (id)avController;
- (id)accessibilityLabel;
- (BOOL)isAccessibilityElement;
- (BOOL)accessibilityTreeHidden;

@end