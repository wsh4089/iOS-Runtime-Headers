/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/Conference.framework/Conference
 */

@class <CNFRegWizardControllerDelegate>, CNFRegController;

@interface CNFRegWizardController : PSSetupController {
    struct { 
        unsigned int automaticKeyboardWasDisabled : 1; 
        unsigned int shouldListenForSuspension : 1; 
        unsigned int canStartNested : 1; 
        unsigned int canShowSplashScreen : 1; 
        unsigned int canShowDisabledScreen : 1; 
        unsigned int hideLearnMoreButton : 1; 
        unsigned int showSplashOnSignin : 1; 
        unsigned int reloadOnViewWillAppear : 1; 
        unsigned int allowCancel : 1; 
    <CNFRegWizardControllerDelegate> *_firstRunDelegate;
    CNFRegController *_regController;
    id _resignListener;
    id _resumeListener;
    int _serviceType;
    } _wizardFlags;
}

@property BOOL allowCancel;
@property BOOL canShowDisabledScreen;
@property BOOL canShowSplashScreen;
@property BOOL canStartNested;
@property <CNFRegWizardControllerDelegate> * firstRunDelegate;
@property BOOL hideLearnMoreButton;
@property(retain) CNFRegController * regController;
@property BOOL reloadOnViewWillAppear;
@property BOOL shouldListenForSuspension;
@property BOOL showSplashOnSignin;

+ (void)setGlobalAppearanceStyle:(int)arg1;
+ (void)setSupportsAutoRotation:(BOOL)arg1;

- (void)_doCancel;
- (int)_firstRunState:(id)arg1;
- (void)_startListeningForResignResume;
- (void)_stopListeningForResignResume;
- (BOOL)allowCancel;
- (BOOL)canShowDisabledScreen;
- (BOOL)canShowSplashScreen;
- (BOOL)canStartNested;
- (id)controllerClassesToShow:(BOOL)arg1;
- (id)controllersToShow:(BOOL)arg1;
- (id)controllersToShow;
- (void)dealloc;
- (void)dismissFinished:(BOOL)arg1;
- (void)dismissWithState:(unsigned int)arg1;
- (void)firstRunController:(id)arg1 finishedWithState:(unsigned int)arg2;
- (id)firstRunDelegate;
- (BOOL)hideLearnMoreButton;
- (id)init;
- (id)initWithRegController:(id)arg1;
- (id)initWithServiceTypes:(int)arg1;
- (id)regController;
- (BOOL)reloadOnViewWillAppear;
- (void)setAllowCancel:(BOOL)arg1;
- (void)setCanShowDisabledScreen:(BOOL)arg1;
- (void)setCanShowSplashScreen:(BOOL)arg1;
- (void)setCanStartNested:(BOOL)arg1;
- (void)setFirstRunDelegate:(id)arg1;
- (void)setHideLearnMoreButton:(BOOL)arg1;
- (void)setRegController:(id)arg1;
- (void)setReloadOnViewWillAppear:(BOOL)arg1;
- (void)setShouldListenForSuspension:(BOOL)arg1;
- (void)setShowSplashOnSignin:(BOOL)arg1;
- (void)setupController;
- (BOOL)shouldAutorotateToInterfaceOrientation:(int)arg1;
- (BOOL)shouldListenForSuspension;
- (BOOL)shouldShowFirstRunController:(BOOL)arg1;
- (BOOL)shouldShowFirstRunController;
- (BOOL)showSplashOnSignin;
- (void)viewDidAppear:(BOOL)arg1;
- (void)viewDidDisappear:(BOOL)arg1;
- (void)viewDidLoad;
- (void)viewWillAppear:(BOOL)arg1;
- (void)viewWillDisappear:(BOOL)arg1;

@end