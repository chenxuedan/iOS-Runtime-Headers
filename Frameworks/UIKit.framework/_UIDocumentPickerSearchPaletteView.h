/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@interface _UIDocumentPickerSearchPaletteView : UIView <UISearchBarDelegate> {
    _UIDocumentPickerContainerViewController *_resultsController;
    UISearchController *_searchController;
    NSLayoutConstraint *_searchFieldLeftConstraint;
    NSLayoutConstraint *_searchFieldRightConstraint;
    _UIDocumentPickerSearchContainerModel *_searchModel;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned int hash;
@property (nonatomic, retain) _UIDocumentPickerContainerViewController *resultsController;
@property (nonatomic, retain) UISearchController *searchController;
@property (nonatomic, retain) NSLayoutConstraint *searchFieldLeftConstraint;
@property (nonatomic, retain) NSLayoutConstraint *searchFieldRightConstraint;
@property (nonatomic, retain) _UIDocumentPickerSearchContainerModel *searchModel;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)dealloc;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1 pickableTypes:(id)arg2 mode:(unsigned int)arg3;
- (void)layoutSubviews;
- (id)resultsController;
- (void)searchBar:(id)arg1 textDidChange:(id)arg2;
- (void)searchBarTextDidBeginEditing:(id)arg1;
- (void)searchCanceled:(id)arg1;
- (id)searchController;
- (id)searchFieldLeftConstraint;
- (id)searchFieldRightConstraint;
- (id)searchModel;
- (void)setBounds:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (void)setFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (void)setResultsController:(id)arg1;
- (void)setSearchController:(id)arg1;
- (void)setSearchFieldLeftConstraint:(id)arg1;
- (void)setSearchFieldRightConstraint:(id)arg1;
- (void)setSearchModel:(id)arg1;
- (void)setServiceViewController:(id)arg1;

@end
