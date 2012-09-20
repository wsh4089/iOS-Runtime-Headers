/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/AppStoreUI.framework/AppStoreUI
 */

@class ASScreenshotsView, NSArray;

@interface ASScreenshotsViewController : SUViewController  {
    NSArray *_artwork;
    ASScreenshotsView *_screenshotsView;
}

@property(readonly) NSArray * artworkImages;


- (void)operation:(id)arg1 finishedWithOutput:(id)arg2;
- (id)artworkImages;
- (id)initWithArtworkArray:(id)arg1;
- (void)_requestMissingImages;
- (void)dealloc;
- (void)viewDidAppear:(BOOL)arg1;
- (void)loadView;

@end