/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/FuseUI.framework/FuseUI
 */

@interface MusicPreviewViewController : UIViewController <MusicJSNativeViewControllerFactory, MusicJSPreviewViewControllerDelegate, SKUINavigationBarDisplayConfiguring, SKUIViewControllerPreviewing> {
    MusicClientContext *_clientContext;
    SKUIDocumentContainerViewController *_previewDocumentViewController;
    NSString *_previewIdentifier;
}

@property (nonatomic, retain) SKUIClientContext *clientContext;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned int hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)clientContext;
- (id)contentScrollView;
- (id)initWithPreviewIdentifier:(id)arg1 clientContext:(id)arg2;
- (void)jsPreviewViewController:(id)arg1 setPreviewDocument:(id)arg2 options:(id)arg3;
- (id)loadJSNativeViewControllerWithAppContext:(id)arg1;
- (int)navigationBarTintAdjustmentMode;
- (id)navigationBarTintColor;
- (id)navigationBarTitleTextTintColor;
- (BOOL)prefersNavigationBarBackgroundViewHidden;
- (id)previewCommitViewController;
- (id)previewMenuItems;
- (void)setClientContext:(id)arg1;
- (void)viewDidLayoutSubviews;
- (void)viewDidLoad;

@end