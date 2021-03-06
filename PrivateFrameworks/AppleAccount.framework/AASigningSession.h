/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/AppleAccount.framework/AppleAccount
 */

@interface AASigningSession : NSObject {
    NSString *_certURL;
    struct NACContextOpaque_ { } *_context;
    long _error;
    NSString *_sessionURL;
}

@property (nonatomic, readonly) long error;

- (void).cxx_destruct;
- (void)dealloc;
- (long)error;
- (void)establishSession;
- (id)initWithCertURL:(id)arg1 sessionURL:(id)arg2;
- (id)signatureForData:(id)arg1;

@end
