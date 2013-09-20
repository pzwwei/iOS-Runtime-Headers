/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/RadioUI.framework/RadioUI
 */

@class <RUWelcomeViewControllerDelegate>, CADisplayLink, RUSignInViewController, RUTermsViewController, SKUICircleProgressIndicator, UIButton, UICollectionView, UILabel, _RUWelcomeTicker;

@interface RUWelcomeViewController : UIViewController <RUSignInViewControllerDelegate, RUTermsViewControllerDelegate, UICollectionViewDataSource, UICollectionViewDelegate> {
    SKUICircleProgressIndicator *_activityIndicatorView;
    <RUWelcomeViewControllerDelegate> *_delegate;
    CADisplayLink *_displayLink;
    BOOL _displayingLoading;
    double _lastTimestamp;
    UIButton *_learnMoreButton;
    UILabel *_loadingLabel;
    UICollectionView *_scrollingStackCollectionView;
    UIButton *_signInButton;
    RUSignInViewController *_signInViewController;
    RUTermsViewController *_termsViewController;
    _RUWelcomeTicker *_ticker;
    UILabel *_titleLabel;
}

@property <RUWelcomeViewControllerDelegate> * delegate;
@property(getter=isDisplayingLoading) BOOL displayingLoading;

- (void).cxx_destruct;
- (void)_accountStoreDidChangeNotification:(id)arg1;
- (void)_attemptOptInAndAllowAuthentication:(BOOL)arg1;
- (void)_checkAcceptedTermsWithCompletionHandler:(id)arg1;
- (void)_completeWithStatus:(int)arg1 didOptIn:(BOOL)arg2;
- (void)_createEndScrollingAnimation;
- (void)_displayLinkAction:(id)arg1;
- (void)_endScrollingIfNecessary;
- (void)_layoutForOrientation:(int)arg1;
- (void)_learnMoreAction:(id)arg1;
- (void)_optInWithActiveAccountWithCompletionHandler:(id)arg1;
- (void)_presentSignInViewController;
- (void)_resumeScrollingIfNecessary;
- (void)_scrollWithCurrentTimestemp:(double)arg1;
- (void)_signInAction:(id)arg1;
- (id)_sortCollectionCells:(id)arg1 byDistanceFromCenter:(struct CGPoint { float x1; float x2; })arg2;
- (id)_stackImageNames;
- (void)_updateSignInButtonTitle;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (int)collectionView:(id)arg1 numberOfItemsInSection:(int)arg2;
- (void)dealloc;
- (id)delegate;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (BOOL)isDisplayingLoading;
- (void)scrollViewDidScroll:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setDisplayingLoading:(BOOL)arg1;
- (void)signInViewController:(id)arg1 didCompleteWithAuthenticateResponse:(id)arg2;
- (void)termsViewController:(id)arg1 didAcceptTerms:(BOOL)arg2;
- (void)viewDidDisappear:(BOOL)arg1;
- (void)viewDidLayoutSubviews;
- (void)viewDidLoad;
- (void)viewWillAppear:(BOOL)arg1;
- (void)willAnimateRotationToInterfaceOrientation:(int)arg1 duration:(double)arg2;

@end