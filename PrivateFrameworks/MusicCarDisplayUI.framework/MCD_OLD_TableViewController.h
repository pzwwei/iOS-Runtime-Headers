/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/MusicCarDisplayUI.framework/MusicCarDisplayUI
 */

@interface MCD_OLD_TableViewController : UITableViewController {
    BOOL _alwaysShowNavBar;
    UIView *_nowPlayingButton;
    MPAVController *_player;
    MPMediaQuery *_query;
    <MCDCarDisplayServiceProvider> *_serviceProvider;
    BOOL _viewHasAppeared;
}

@property (nonatomic) BOOL alwaysShowNavBar;
@property (nonatomic, readonly) MPAVController *player;
@property (nonatomic, readonly) MPMediaQuery *query;
@property (nonatomic, readonly) <MCDCarDisplayServiceProvider> *serviceProvider;
@property (nonatomic) BOOL viewHasAppeared;

+ (id)addAlbumArtViewFromItem:(id)arg1 toCell:(id)arg2 rowHeight:(float)arg3;
+ (id)addAlbumArtViewWithImage:(id)arg1 toCell:(id)arg2 rowHeight:(float)arg3;

- (void).cxx_destruct;
- (void)_itemChanged:(id)arg1;
- (void)_nowPlayingButtonTapped:(id)arg1;
- (void)_presentNowPlayingViewController;
- (void)_updateNowPlayingVisibility;
- (BOOL)alwaysShowNavBar;
- (id)dequeueReusableCarDisplayCellForTableView:(id)arg1 indexPath:(id)arg2;
- (BOOL)hasRowsToDisplay;
- (id)initWithQuery:(id)arg1 player:(id)arg2 serviceProvider:(id)arg3;
- (id)player;
- (id)preferredFocusedItem;
- (id)query;
- (id)serviceProvider;
- (void)setAlwaysShowNavBar:(BOOL)arg1;
- (void)setViewHasAppeared:(BOOL)arg1;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (int)tableView:(id)arg1 numberOfRowsInSection:(int)arg2;
- (BOOL)tableView:(id)arg1 shouldChangeFocusedItem:(id)arg2 fromRowAtIndexPath:(id)arg3;
- (id)viewControllerForRowAtIndexPath:(id)arg1;
- (void)viewDidAppear:(BOOL)arg1;
- (void)viewDidLoad;
- (BOOL)viewHasAppeared;
- (void)viewWillAppear:(BOOL)arg1;
- (void)viewWillDisappear:(BOOL)arg1;

@end