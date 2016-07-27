//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import "ImageDownloaderDelegate-Protocol.h"
#import "SKStoreProductViewControllerDelegate-Protocol.h"
#import "UITableViewDataSource-Protocol.h"
#import "UITableViewDelegate-Protocol.h"

@class CampaignDetailHeaderView, CampaignItemInfo, Downloader, ImageDownloader, NSString, SKStoreProductViewController, StoreCampaignViewController, StoreLoadingView, UIImage, UILabel, UITableView;

@interface CampaignDetailViewController : UIViewController <UITableViewDataSource, UITableViewDelegate, ImageDownloaderDelegate, SKStoreProductViewControllerDelegate>
{
    int rowSamplePlayed;
    _Bool isDownloadingSample;
    _Bool allowsRedownload;
    CampaignItemInfo *itemInfo;
    CampaignDetailHeaderView *headerView;
    UITableView *detailTableView;
    StoreLoadingView *loadingView;
    Downloader *infoDownloader;
    ImageDownloader *itemIconDownloader;
    UIImage *packBgImage0;
    UIImage *packBgImage1;
    SKStoreProductViewController *itunesViewCtrl;
    _Bool bDismissing;
    UILabel *labelItemTerms;
    UILabel *labelCopyRight;
    id _delegate;
    StoreCampaignViewController *_viewController;
}

@property(nonatomic) __weak StoreCampaignViewController *viewController; // @synthesize viewController=_viewController;
@property(nonatomic) __weak id delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)detailClose;
- (void)dealloc;
- (_Bool)shouldAutorotate;
- (unsigned long long)supportedInterfaceOrientations;
- (_Bool)shouldAutorotateToInterfaceOrientation:(long long)arg1;
- (void)viewDidDisappear:(_Bool)arg1;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidUnload;
- (void)didReceiveMemoryWarning;
- (void)stopDownloadArtworks;
- (void)removeItem;
- (void)imageDownloader:(id)arg1 didLoad:(id)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 willDisplayCell:(id)arg2 forRowAtIndexPath:(id)arg3;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (void)downloaderProceed:(id)arg1;
- (void)productViewControllerDidFinish:(id)arg1;
- (void)handleLink:(id)arg1;
- (void)doPurchase:(id)arg1;
- (void)loadInfo;
- (void)showPackInfo;
- (void)refreshCampaignItem:(id)arg1;
- (void)updateCampaignState:(id)arg1;
- (void)removeCampaignInfo;
- (void)setCampaignInfo:(id)arg1;
- (void)loadView;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
