//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSURLConnectionDelegate.h"
#import "UIWebViewDelegate.h"

@class LCPlayerConfigItem, NSMutableData, NSString, NSURLConnection, UIWebView;

@interface LCJSUpdateEngine : NSObject <NSURLConnectionDelegate, UIWebViewDelegate>
{
    _Bool _needUpdateJSFile;
    CDUnknownBlockType _jsUpdateBlock;
    NSMutableData *_appendData;
    NSURLConnection *_urlConnection;
    LCPlayerConfigItem *_configItem;
    NSString *_cacheJsFileVer;
    UIWebView *_jsWebView;
}

+ (id)sharedEngine;
@property(retain, nonatomic) UIWebView *jsWebView; // @synthesize jsWebView=_jsWebView;
@property(retain, nonatomic) NSString *cacheJsFileVer; // @synthesize cacheJsFileVer=_cacheJsFileVer;
@property(retain, nonatomic) LCPlayerConfigItem *configItem; // @synthesize configItem=_configItem;
@property(retain, nonatomic) NSURLConnection *urlConnection; // @synthesize urlConnection=_urlConnection;
@property(retain, nonatomic) NSMutableData *appendData; // @synthesize appendData=_appendData;
@property(copy, nonatomic) CDUnknownBlockType jsUpdateBlock; // @synthesize jsUpdateBlock=_jsUpdateBlock;
- (void).cxx_destruct;
- (id)getFileMD5WithPath:(id)arg1;
- (_Bool)copyTempFileAtURL:(id)arg1 toDestination:(id)arg2;
- (void)webView:(id)arg1 didFailLoadWithError:(id)arg2;
- (void)webViewDidFinishLoad:(id)arg1;
- (void)checkUpdate;
- (id)localJSFilePath;
- (void)updateCompleted:(CDUnknownBlockType)arg1;
- (_Bool)uncompressZippedFile;
- (void)startDownloadJSFile;
- (id)currentJSFileVersion;
- (void)savingJSFileVer:(id)arg1;
- (id)localJSZipPath;
- (id)localUpdatePath;
- (id)localPath;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

