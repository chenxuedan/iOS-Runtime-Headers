/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/YouTube.framework/YouTube
 */

@class NSString, NSMutableArray, NSMutableURLRequest;

@interface YTSearchSuggestionsRequest : XMLSAXHTTPRequest  {
    id _delegate;
    NSMutableArray *_suggestions;
    NSMutableURLRequest *_deferredRequest;
    NSString *_query;
}


- (int)parseData:(id)arg1;
- (void)dealloc;
- (void)loadRequest:(id)arg1;
- (void)clearDelegate;
- (void)requestSuggestionsWithDelegate:(id)arg1 query:(id)arg2;
- (id)_suggestionsURLForQuery:(id)arg1;
- (void)_didAuthenticate:(id)arg1;
- (void)_failedToAuthenticate:(id)arg1;
- (void)_listenForAuthenticationNotifications:(BOOL)arg1;
- (void)didParseData;
- (void)failWithError:(id)arg1;

@end