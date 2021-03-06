/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/QuickLook.framework/QuickLook
 */

/* RuntimeBrowser encountered an ivar type encoding it does not handle. 
   See Warning(s) below.
 */

@class <QLPreviewItem>, MPVolumeView, NSMutableDictionary, NSNumberFormatter, NSString, NSURL, QLArchiveViewer, QLPreviewItemsSource, UIBarButtonItem, UIDocumentInteractionController, UILabel, UINavigationController, UIView, UIViewController<QLPreviewContentControllerProtocol>, _UIAsyncInvocation;

@interface QLPreviewControllerReserved : NSObject {
    unsigned int statusBarWasHidden : 1;
    unsigned int toolbarWasHidden : 1;
    unsigned int isInUIDICPopover : 1;
    UIBarButtonItem *actionItem;
    UIBarButtonItem *archiveItem;
    QLArchiveViewer *archiveViewer;
    NSMutableDictionary *avStateForPreviewItems;
    BOOL blockRemoteImages;
    _UIAsyncInvocation *cancelViewServiceRequest;
    id delegate;
    NSNumberFormatter *indexFormatter;
    UIBarButtonItem *indexItem;
    UILabel *indexLabel;
    UIDocumentInteractionController *interactionController;
    BOOL internalViewsLoaded;
    BOOL isDelayingPresentation;
    QLPreviewItemsSource *itemsSource;
    NSURL *lastPreviewedCurrentItemURL;
    NSURL *lastPreviewedRealItemURL;
    UIBarButtonItem *listItem;
    NSString *loadingTextForMissingFiles;
    UIView *mainView;
    int mode;
    UINavigationController *navigationController;
    int overlayState;
    NSMutableDictionary *pdfPreviewDataCache;
    UIBarButtonItem *playPauseButton;
    UIViewController<QLPreviewContentControllerProtocol> *previewContentController;
    <QLPreviewItem> *previewItem;
    BOOL previousNavBarWasTranslucent;
    int previousStatusBarStyle;
    int previousToolbarStyle;
    BOOL previousToolbarWasTranslucent;
    id readyBlock;
    UIBarButtonItem *routeButton;
    BOOL scrubbing;
    BOOL showActionAsDefaultButton;
    BOOL sourceIsManaged;
    UIBarButtonItem *titleItem;
    BOOL useCustomActionButton;
    MPVolumeView *volumeView;
    MPVolumeView *volumeViewHidden;
}

- (void)dealloc;
- (id)init;

@end
