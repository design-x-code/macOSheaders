//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "SmallDialogController.h"

@class NSString;

@interface SmallDocumentDialogController : SmallDialogController
{
    NSString *_nibWindowTitle;
}

+ (id)show:(id)arg1 at:(struct CGPoint)arg2;
+ (id)toggle:(id)arg1;
+ (id)showIfInvisible:(id)arg1;
+ (id)show:(id)arg1;
+ (BOOL)windowIsVisible:(id)arg1;
+ (void)unload:(id)arg1;
+ (id)sharedController:(id)arg1;
+ (id)existingSharedController:(id)arg1;
+ (id)showAt:(struct CGPoint)arg1;
+ (id)toggle;
+ (id)showIfInvisible;
+ (id)show;
+ (BOOL)windowIsVisible;
+ (void)unload;
+ (id)sharedController;
+ (id)existingSharedController;
// Error parsing type for property song:
// Property attributes: T^{CSong={FVARS=IssssIisii{TPureClock=q}ccCc{TPosOneBasedTrackNr=s}{TPosOneBasedTrackNr=s}iiiiiicccciiiiiiiqiiiiiccccCCcccccccccc[12c]scccccccCcccccciccCccccccccccccccccciii{TPosOneBasedTrackNr=s}s{TPosOneBasedTrackNr=s}ssscccccciiicciiissccscccCcCcc[8c]cccCccccssscccccccc{TVolatile<TAbsPureClock>=q}{TVolatile<TAbsPureClock>=q}{TAbsPureClock=q}{TAbsPureClock=q}{TSignedPureClock=q}{TAbsPureClock=q}{TAbsPureClock=q}{TPureClock=q}{TPureClock=q}{TPureClock=q}{TAbsPureClock=q}{TPureClock=q}{TAbsPureClock=q}{TAbsPureClock=q}{TPureClock=q}{TPureClock=q}{TPureClock=q}{TPureClock=q}i{TPosOneBasedTrackNr=s}ccfccs{TAbsPureClock=q}{TAbsPureClock=q}{TPureLength=q}c{TAbsPureClock=q}ccccccc{TAbsPureClock=q}ii{CEvNote=qq{CEv=qq}}{CEvNote=qq{CEv=qq}}{CEvNote=qq{CEv=qq}}{CEvNote=qq{CEv=qq}}ccc[54c]SS}{FVARS=IssssIisii{TPureClock=q}ccCc{TPosOneBasedTrackNr=s}{TPosOneBasedTrackNr=s}iiiiiicccciiiiiiiqiiiiiccccCCcccccccccc[12c]scccccccCcccccciccCccccccccccccccccciii{TPosOneBasedTrackNr=s}s{TPosOneBasedTrackNr=s}ssscccccciiicciiissccscccCcCcc[8c]cccCccccssscccccccc{TVolatile<TAbsPureClock>=q}{TVolatile<TAbsPureClock>=q}{TAbsPureClock=q}{TAbsPureClock=q}{TSignedPureClock=q}{TAbsPureClock=q}{TAbsPureClock=q}{TPureClock=q}{TPureClock=q}{TPureClock=q}{TAbsPureClock=q}{TPureClock=q}{TAbsPureClock=q}{TAbsPureClock=q}{TPureClock=q}{TPureClock=q}{TPureClock=q}{TPureClock=q}i{TPosOneBasedTrackNr=s}ccfccs{TAbsPureClock=q}{TAbsPureClock=q}{TPureLength=q}c{TAbsPureClock=q}ccccccc{TAbsPureClock=q}ii{CEvNote=qq{CEv=qq}}{CEvNote=qq{CEv=qq}}{CEvNote=qq{CEv=qq}}{CEvNote=qq{CEv=qq}}ccc[54c]SS}[120c]cCcc[170c][16C]cccc{CTFlagSet<_SONG::TSelBasedFlags, unsigned char>=C}c{CTFlagSet<_SONG::TFreeRecordingFlags, unsigned char>=C}ccccCcc[95s]{CTFlagSet<_SONG::TGeneralFlags, unsigned short>=S}SSSS[108i][16i]iiiiiiiii{CTronFlags={CTFlagSet<TTronFlags, int>=i}}i{CTFlagSet<_SONG::TVariousEditorFlags, int>=i}iiiiiiiiiiiIif^{CSongObjects}^{tMapGenData}^{GenDataPointerGroup}^{vector<MAMem2, std::__1::allocator<MAMem2> >}^{CAdjustBeats}^{CTrackConductor}^{CTransientContainer}^{CMovieThumbnailUtility}^{CMovieData}^{CChordTypes}^{CAssessmentController}i{TTrackNr=qi}ii{MORESEQPARS=sssccs{QUAMOD=ss(?=s{?=cc})sss}{TSignedPureLength=q}cccccc{REALS=qq}iccsIiiicccc}{MORESEQPARS=sssccs{QUAMOD=ss(?=s{?=cc})sss}{TSignedPureLength=q}cccccc{REALS=qq}iccsIiiicccc}{TAbsPureClock=q}S[16c]i{CTFlagSet<_SONG::TSongRuntimeFlags, int>=i}^{CEvs}c{CNoteRepeatPars=cccccccccccccccccccccccc[8c]}QiiC^{CUndoManager}BB{atomic<int>={__cxx_atomic_impl<int, std::__1::__cxx_atomic_base_impl<int> >=Ai}}B{unique_ptr<CSongCategories, std::__1::default_delete<CSongCategories> >={__compressed_pair<CSongCategories *, std::__1::default_delete<CSongCategories> >=^{CSongCategories}}}},R,N

- (void)loadDefaultFrame:(BOOL)arg1;
- (void)saveDefaultFrame;
- (id)defaultFrameKey;
- (id)windowTitle;
@property(readonly, nonatomic) NSString *windowRightTitle;
- (void)windowWillClose:(id)arg1;
- (void)showWindow:(id)arg1;
- (void)awakeFromNib;
- (void)dealloc;
@property(readonly, nonatomic) unsigned short parentViewClass;

@end

