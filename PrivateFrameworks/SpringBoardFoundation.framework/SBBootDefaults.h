/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/SpringBoardFoundation.framework/SpringBoardFoundation
 */

@interface SBBootDefaults : SBAbstractSpringBoardDefaultDomain

@property (nonatomic, readonly) BOOL dontLockAfterCrash;
@property (nonatomic, retain) NSString *lastSystemBuildVersion;
@property (nonatomic, readonly) BOOL recordBootTimeTillDidFinishLaunching;
@property (nonatomic, retain) NSString *relaunchReason;
@property (getter=isRestartForLauguageChanged, nonatomic) BOOL restartForLanguageChanged;
@property (getter=isRestartForLanguageSetup, nonatomic) BOOL restartForLanguageSetup;
@property (getter=isRestartForLanguageWhileLocked, nonatomic) BOOL restartForLanguageWhileLocked;
@property (nonatomic, retain) NSURL *urlToRelaunchToAfterBoot;

- (void)_bindAndRegisterDefaults;

@end
