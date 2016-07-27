//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSURLConnectionDataDelegate-Protocol.h"
#import "NSURLConnectionDelegate-Protocol.h"

@class NSDictionary, NSMutableData, NSString, NSURLConnection;

@interface iOSNativeHttpClient : NSObject <NSURLConnectionDelegate, NSURLConnectionDataDelegate>
{
    struct iOSHttpClient *mpProxy;
    struct _opaque_pthread_mutex_t mMutex;
    struct _opaque_pthread_mutexattr_t mMutexAttr;
    NSURLConnection *mpConnection;
    struct __SecCertificate *mSSLCertificate;
    int mStatusCode;
    long long mContentLength;
    NSDictionary *mpResponseHeaders;
    NSMutableData *mpBody;
    int mErrorCode;
    _Bool mComplete;
    _Bool mAllowUnknownCA;
}

@property(readonly, nonatomic) _Bool mAllowUnknownCA; // @synthesize mAllowUnknownCA;
@property(readonly, nonatomic) _Bool mComplete; // @synthesize mComplete;
@property(readonly, nonatomic) int mErrorCode; // @synthesize mErrorCode;
@property(readonly, nonatomic) NSMutableData *mpBody; // @synthesize mpBody;
@property(readonly, nonatomic) NSDictionary *mpResponseHeaders; // @synthesize mpResponseHeaders;
@property(readonly, nonatomic) long long mContentLength; // @synthesize mContentLength;
@property(readonly, nonatomic) int mStatusCode; // @synthesize mStatusCode;
@property(readonly, nonatomic) struct iOSHttpClient *mpProxy; // @synthesize mpProxy;
- (id).cxx_construct;
- (void)connection:(id)arg1 willSendRequestForAuthenticationChallenge:(id)arg2;
- (void)connectionDidFinishLoading:(id)arg1;
- (void)connection:(id)arg1 didFailWithError:(id)arg2;
- (void)connection:(id)arg1 didReceiveData:(id)arg2;
- (void)connection:(id)arg1 didReceiveResponse:(id)arg2;
- (id)connection:(id)arg1 willSendRequest:(id)arg2 redirectResponse:(id)arg3;
- (void)cancel;
- (void)request:(id)arg1:(id)arg2:(id)arg3:(int)arg4:(int)arg5;
- (void)setAllowUnknownCA:(_Bool)arg1;
- (void)setSSLCertificate:(struct __SecCertificate *)arg1;
- (void)setListener:(struct iOSHttpClient *)arg1;
- (void)unlock;
- (void)lock;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
