/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CommunicationsSetupUI.framework/CommunicationsSetupUI
 */

@interface CNFRegChangeAccountPasswordController : CNFRegAuthorizedAccountWebViewController {
    NSString *_appleID;
    <CNFRegChangeAccountPasswordDelegate> *_delegate;
}

@property (nonatomic, copy) NSString *appleID;
@property (nonatomic) <CNFRegChangeAccountPasswordDelegate> *delegate;

- (id)appleID;
- (id)bagKey;
- (BOOL)canSendURLRequest:(id)arg1;
- (void)cancelTapped;
- (void)completeHandoffWithStatus:(int)arg1 appleID:(id)arg2 authID:(id)arg3 authToken:(id)arg4;
- (void)dealloc;
- (id)delegate;
- (id)initWithRegController:(id)arg1 appleID:(id)arg2;
- (id)logName;
- (id)overrideURLForURL:(id)arg1;
- (void)setAppleID:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setHeadersForRequest:(id)arg1;

@end
