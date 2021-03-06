/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/Social.framework/Social
 */

@interface SLSheetPlaceViewController : UIViewController <MKMapViewDelegate, SLPlaceDataSourceDelegate, UISearchBarDelegate, UISearchDisplayDelegate, UITableViewDataSource, UITableViewDelegate> {
    ACAccount *_account;
    NSBundle *_effectiveBundle;
    float _mapHeight;
    MKMapView *_mapView;
    NSObject<SLPlaceDataSource> *_placeDataSource;
    SLSheetPlaceSearchController *_placeSearchController;
    NSArray *_places;
    BOOL _searchAnimationComplete;
    UISearchBar *_searchBar;
    UISearchDisplayController *_searchDisplayController;
    BOOL _searchEnabled;
    BOOL _searchPresented;
    SLPlace *_selectedPlace;
    NSObject<SLSheetPlaceViewControllerDelegate> *_selectionDelegate;
    UITableView *_tableView;
}

@property (retain) ACAccount *account;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned int hash;
@property (retain) NSObject<SLPlaceDataSource> *placeDataSource;
@property (retain) NSArray *places;
@property (nonatomic) BOOL searchEnabled;
@property NSObject<SLSheetPlaceViewControllerDelegate> *selectionDelegate;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_calculatePreferredContentSize;
- (void)_centerMapForPlaces;
- (void)_centerMapWithSelectedPlace:(id)arg1;
- (BOOL)_forceSelectPlace:(id)arg1 setMapAnnotation:(BOOL)arg2;
- (void)_layoutForSearch;
- (void)_layoutNormal;
- (float)_mapHeightForInterfaceOrientation:(int)arg1;
- (id)_placeForRow:(int)arg1;
- (float)_preferredViewHeight;
- (void)_presentSearch;
- (struct { struct { double x_1_1_1; double x_1_1_2; } x1; struct { double x_2_1_1; double x_2_1_2; } x2; })_regionForPlaces:(id)arg1;
- (void)_restoreFromSearch;
- (id)account;
- (void)cancelButtonTapped:(id)arg1;
- (void)dealloc;
- (void)didReceiveMemoryWarning;
- (id)initWithPlaceDataSource:(id)arg1 effectiveBundle:(id)arg2;
- (void)loadView;
- (void)mapView:(id)arg1 didSelectAnnotationView:(id)arg2;
- (int)numberOfSectionsInTableView:(id)arg1;
- (id)placeDataSource;
- (void)placeManager:(id)arg1 failedWithError:(id)arg2;
- (void)placeManager:(id)arg1 updatedPlaces:(id)arg2;
- (id)places;
- (void)searchBarCancelButtonClicked:(id)arg1;
- (BOOL)searchBarShouldBeginEditing:(id)arg1;
- (void)searchBarTextDidBeginEditing:(id)arg1;
- (void)searchBarTextDidEndEditing:(id)arg1;
- (BOOL)searchDisplayController:(id)arg1 shouldReloadTableForSearchString:(id)arg2;
- (void)searchDisplayControllerDidBeginSearch:(id)arg1;
- (void)searchDisplayControllerDidEndSearch:(id)arg1;
- (void)searchDisplayControllerWillEndSearch:(id)arg1;
- (BOOL)searchEnabled;
- (id)selectionDelegate;
- (void)setAccount:(id)arg1;
- (void)setPlaceDataSource:(id)arg1;
- (void)setPlaces:(id)arg1;
- (void)setSearchEnabled:(BOOL)arg1;
- (void)setSelectedPlace:(id)arg1;
- (void)setSelectionDelegate:(id)arg1;
- (BOOL)shouldAutorotateToInterfaceOrientation:(int)arg1;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (int)tableView:(id)arg1 numberOfRowsInSection:(int)arg2;
- (void)tableView:(id)arg1 willDisplayCell:(id)arg2 forRowAtIndexPath:(id)arg3;
- (void)viewDidAppear:(BOOL)arg1;
- (void)viewDidDisappear:(BOOL)arg1;
- (void)viewDidLoad;
- (void)viewWillAppear:(BOOL)arg1;
- (void)viewWillDisappear:(BOOL)arg1;
- (void)willAnimateRotationToInterfaceOrientation:(int)arg1 duration:(double)arg2;

@end
