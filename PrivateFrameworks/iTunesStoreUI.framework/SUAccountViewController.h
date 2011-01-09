/* Generated by RuntimeBrowser on iPhone OS 3.0
   Image: /System/Library/PrivateFrameworks/iTunesStoreUI.framework/iTunesStoreUI
 */

@class NSData;



@interface SUAccountViewController : SUStorePageViewController 
{
    NSData *_continuationData;
    BOOL _failed;
    BOOL _shouldReloadStorefrontWhenDismissed;
    NSInteger _style;
}

@property NSInteger style; /* unknown property attribute: V_style */
@property BOOL shouldReloadStorefrontWhenDismissed; /* unknown property attribute: V_shouldReloadStorefrontWhenDismissed */
@property(retain) NSData *continuationData; /* unknown property attribute: V_continuationData */


- (void)dealloc;
- (id)createFetchOperation;
- (id)createPlaceholderViewController;
- (id)createViewControllerForPage:(id)arg1 ofType:(NSInteger)arg2 returningError:(id*)arg3;
- (void)handleFailureWithError:(id)arg1;
- (void)viewDidDisappear:(BOOL)arg1;
- (id)_authenticationQueryParametersForStyle:(NSInteger)arg1;
- (id)_bagKeyForStyle:(NSInteger)arg1;
- (NSInteger)style;
- (void)setStyle:(NSInteger)arg1;
- (BOOL)shouldReloadStorefrontWhenDismissed;
- (void)setShouldReloadStorefrontWhenDismissed:(BOOL)arg1;
- (id)continuationData;
- (void)setContinuationData:(id)arg1;

@end