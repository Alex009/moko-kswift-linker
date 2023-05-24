#import <Foundation/NSArray.h>
#import <Foundation/NSDictionary.h>
#import <Foundation/NSError.h>
#import <Foundation/NSObject.h>
#import <Foundation/NSSet.h>
#import <Foundation/NSString.h>
#import <Foundation/NSValue.h>

@class MPLKotlinCancellationException, MPLKotlinThrowable, MPLKotlinUnit, MPLJobSupport, MPLCoroutineStart, MPLCoroutineDispatcher, MPLKotlinAbstractCoroutineContextElement, MPLCoroutineDispatcherKey, MPLKotlinArray<T>, MPLKotlinException, MPLKotlinRuntimeException, MPLKotlinAbstractCoroutineContextKey<B, E>, MPLCoroutineExceptionHandlerKey, MPLCoroutineNameKey, MPLCoroutineName, MPLKotlinEnumCompanion, MPLKotlinEnum<E>, MPLDispatchers, MPLMainCoroutineDispatcher, MPLGlobalScope, MPLJobKey, MPLNonCancellable, MPLNonDisposableHandle, MPLKotlinIllegalStateException, MPLTimeoutCancellationException, MPLBufferOverflow, MPLChannelFactory, MPLKotlinNoSuchElementException, MPLSharingCommand, MPLSharingStartedCompanion, MPLChannelFlow<T>, MPLAtomicDesc, MPLLockFreeLinkedListNodePrepareOp, MPLAtomicOp<__contravariant T>, MPLOpDescriptor, MPLLockFreeLinkedListNode, MPLLockFreeLinkedListNodeAddLastDesc<T>, MPLLockFreeLinkedListNodeRemoveFirstDesc<T>, MPLLockFreeLinkedListNodeAbstractAtomicDesc, MPLAtomicfuSynchronizedObjectLockState, MPLKotlinAtomicReference<T>, MPLAtomicfuSynchronizedObject, MPLThreadSafeHeap<T>, MPLKotlinNothing, MPLExcludedSealedV1, MPLExcludedSealedV2, MPLGenericSealedClass<__covariant T, __covariant U>, MPLGenericSealedClassWithOnePropertyT<T>, MPLGenericSealedClassWithOnePropertyU<U>, MPLGenericSealedClassWithTwoProperties<T, U>, MPLGenericSealedClassWithoutProperty, MPLNonGenericSealedClass, MPLNonGenericSealedClassWithProperty, MPLNonGenericSealedClassWithoutProperty, MPLPublicInternalInsideSealedTest, MPLPublicInternalInsideSealedTestPublicSealed, MPLSomeClassCompanion, MPLStatus<T>, MPLStatusFailure<T>, MPLStatusSuccess<T>, MPLUIStateClass<__covariant T>, MPLUIStateData<T>, MPLUIStateEmpty, MPLUIStateError, MPLUIStateLoading, MPLUIStateClassData<T>, MPLUIStateClassEmpty, MPLUIStateClassError, MPLUIStateClassLoading, MPLKotlinIntIterator, MPLKotlinIntArray, MPLKotlinLongIterator, MPLKotlinLongArray, MPLKotlinIntProgressionCompanion, MPLKotlinIntProgression, MPLKotlinIntRangeCompanion, MPLKotlinIntRange, MPLKotlinLongProgressionCompanion, MPLKotlinLongProgression, MPLKotlinLongRangeCompanion, MPLKotlinLongRange, MPLSomeClass, MPLCloseableCoroutineDispatcher, UILabel, MPLLiveData<T>, MPLCFlow<T>, MPLCDataProvider<T>, UIControl, MPLAtomicfuSynchronizedObjectStatus;

@protocol MPLChildHandle, MPLChildJob, MPLDisposableHandle, MPLJob, MPLKotlinSequence, MPLSelectClause0, MPLKotlinCoroutineContextKey, MPLKotlinCoroutineContextElement, MPLKotlinCoroutineContext, MPLParentJob, MPLSelectInstance, MPLKotlinSuspendFunction0, MPLKotlinContinuation, MPLCoroutineScope, MPLKotlinSuspendFunction1, MPLKotlinContinuationInterceptor, MPLRunnable, MPLSelectClause1, MPLDeferred, MPLKotlinComparable, MPLCancellableContinuation, MPLCopyableThrowable, MPLReceiveChannel, MPLSelectClause2, MPLSendChannel, MPLChannelIterator, MPLBroadcastChannel, MPLFlowCollector, MPLFlow, MPLStateFlow, MPLSharedFlow, MPLMutableSharedFlow, MPLSharingStarted, MPLFusibleFlow, MPLProducerScope, MPLMainDispatcherFactory, MPLIDataProvider, MPLExcludedSealed, MPLUIState, MPLKotlinIterator, MPLKotlinIterable, MPLKotlinClosedRange, MPLCompletableJob, MPLCompletableDeferred, MPLCoroutineExceptionHandler, MPLChannel, MPLKotlinSuspendFunction2, MPLKotlinSuspendFunction3, MPLMutableStateFlow, MPLKotlinSuspendFunction5, MPLKotlinSuspendFunction4, MPLKotlinSuspendFunction6, MPLSelectBuilder, MPLMutex, MPLSemaphore, MPLSomeInterface, MPLCloseable, MPLKotlinFunction;

NS_ASSUME_NONNULL_BEGIN
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wunknown-warning-option"
#pragma clang diagnostic ignored "-Wincompatible-property-type"
#pragma clang diagnostic ignored "-Wnullability"

#pragma push_macro("_Nullable_result")
#if !__has_feature(nullability_nullable_result)
#undef _Nullable_result
#define _Nullable_result _Nullable
#endif

__attribute__((swift_name("KotlinBase")))
@interface MPLBase : NSObject
- (instancetype)init __attribute__((unavailable));
+ (instancetype)new __attribute__((unavailable));
+ (void)initialize __attribute__((objc_requires_super));
@end;

@interface MPLBase (MPLBaseCopying) <NSCopying>
@end;

__attribute__((swift_name("KotlinMutableSet")))
@interface MPLMutableSet<ObjectType> : NSMutableSet<ObjectType>
@end;

__attribute__((swift_name("KotlinMutableDictionary")))
@interface MPLMutableDictionary<KeyType, ObjectType> : NSMutableDictionary<KeyType, ObjectType>
@end;

@interface NSError (NSErrorMPLKotlinException)
@property (readonly) id _Nullable kotlinException;
@end;

__attribute__((swift_name("KotlinNumber")))
@interface MPLNumber : NSNumber
- (instancetype)initWithChar:(char)value __attribute__((unavailable));
- (instancetype)initWithUnsignedChar:(unsigned char)value __attribute__((unavailable));
- (instancetype)initWithShort:(short)value __attribute__((unavailable));
- (instancetype)initWithUnsignedShort:(unsigned short)value __attribute__((unavailable));
- (instancetype)initWithInt:(int)value __attribute__((unavailable));
- (instancetype)initWithUnsignedInt:(unsigned int)value __attribute__((unavailable));
- (instancetype)initWithLong:(long)value __attribute__((unavailable));
- (instancetype)initWithUnsignedLong:(unsigned long)value __attribute__((unavailable));
- (instancetype)initWithLongLong:(long long)value __attribute__((unavailable));
- (instancetype)initWithUnsignedLongLong:(unsigned long long)value __attribute__((unavailable));
- (instancetype)initWithFloat:(float)value __attribute__((unavailable));
- (instancetype)initWithDouble:(double)value __attribute__((unavailable));
- (instancetype)initWithBool:(BOOL)value __attribute__((unavailable));
- (instancetype)initWithInteger:(NSInteger)value __attribute__((unavailable));
- (instancetype)initWithUnsignedInteger:(NSUInteger)value __attribute__((unavailable));
+ (instancetype)numberWithChar:(char)value __attribute__((unavailable));
+ (instancetype)numberWithUnsignedChar:(unsigned char)value __attribute__((unavailable));
+ (instancetype)numberWithShort:(short)value __attribute__((unavailable));
+ (instancetype)numberWithUnsignedShort:(unsigned short)value __attribute__((unavailable));
+ (instancetype)numberWithInt:(int)value __attribute__((unavailable));
+ (instancetype)numberWithUnsignedInt:(unsigned int)value __attribute__((unavailable));
+ (instancetype)numberWithLong:(long)value __attribute__((unavailable));
+ (instancetype)numberWithUnsignedLong:(unsigned long)value __attribute__((unavailable));
+ (instancetype)numberWithLongLong:(long long)value __attribute__((unavailable));
+ (instancetype)numberWithUnsignedLongLong:(unsigned long long)value __attribute__((unavailable));
+ (instancetype)numberWithFloat:(float)value __attribute__((unavailable));
+ (instancetype)numberWithDouble:(double)value __attribute__((unavailable));
+ (instancetype)numberWithBool:(BOOL)value __attribute__((unavailable));
+ (instancetype)numberWithInteger:(NSInteger)value __attribute__((unavailable));
+ (instancetype)numberWithUnsignedInteger:(NSUInteger)value __attribute__((unavailable));
@end;

__attribute__((swift_name("KotlinByte")))
@interface MPLByte : MPLNumber
- (instancetype)initWithChar:(char)value;
+ (instancetype)numberWithChar:(char)value;
@end;

__attribute__((swift_name("KotlinUByte")))
@interface MPLUByte : MPLNumber
- (instancetype)initWithUnsignedChar:(unsigned char)value;
+ (instancetype)numberWithUnsignedChar:(unsigned char)value;
@end;

__attribute__((swift_name("KotlinShort")))
@interface MPLShort : MPLNumber
- (instancetype)initWithShort:(short)value;
+ (instancetype)numberWithShort:(short)value;
@end;

__attribute__((swift_name("KotlinUShort")))
@interface MPLUShort : MPLNumber
- (instancetype)initWithUnsignedShort:(unsigned short)value;
+ (instancetype)numberWithUnsignedShort:(unsigned short)value;
@end;

__attribute__((swift_name("KotlinInt")))
@interface MPLInt : MPLNumber
- (instancetype)initWithInt:(int)value;
+ (instancetype)numberWithInt:(int)value;
@end;

__attribute__((swift_name("KotlinUInt")))
@interface MPLUInt : MPLNumber
- (instancetype)initWithUnsignedInt:(unsigned int)value;
+ (instancetype)numberWithUnsignedInt:(unsigned int)value;
@end;

__attribute__((swift_name("KotlinLong")))
@interface MPLLong : MPLNumber
- (instancetype)initWithLongLong:(long long)value;
+ (instancetype)numberWithLongLong:(long long)value;
@end;

__attribute__((swift_name("KotlinULong")))
@interface MPLULong : MPLNumber
- (instancetype)initWithUnsignedLongLong:(unsigned long long)value;
+ (instancetype)numberWithUnsignedLongLong:(unsigned long long)value;
@end;

__attribute__((swift_name("KotlinFloat")))
@interface MPLFloat : MPLNumber
- (instancetype)initWithFloat:(float)value;
+ (instancetype)numberWithFloat:(float)value;
@end;

__attribute__((swift_name("KotlinDouble")))
@interface MPLDouble : MPLNumber
- (instancetype)initWithDouble:(double)value;
+ (instancetype)numberWithDouble:(double)value;
@end;

__attribute__((swift_name("KotlinBoolean")))
@interface MPLBoolean : MPLNumber
- (instancetype)initWithBool:(BOOL)value;
+ (instancetype)numberWithBool:(BOOL)value;
@end;

__attribute__((swift_name("KotlinCoroutineContext")))
@protocol MPLKotlinCoroutineContext
@required
- (id _Nullable)foldInitial:(id _Nullable)initial operation:(id _Nullable (^)(id _Nullable, id<MPLKotlinCoroutineContextElement>))operation __attribute__((swift_name("fold(initial:operation:)")));
- (id<MPLKotlinCoroutineContextElement> _Nullable)getKey:(id<MPLKotlinCoroutineContextKey>)key __attribute__((swift_name("get(key:)")));
- (id<MPLKotlinCoroutineContext>)minusKeyKey:(id<MPLKotlinCoroutineContextKey>)key __attribute__((swift_name("minusKey(key:)")));
- (id<MPLKotlinCoroutineContext>)plusContext:(id<MPLKotlinCoroutineContext>)context __attribute__((swift_name("plus(context:)")));
@end;

__attribute__((swift_name("KotlinCoroutineContextElement")))
@protocol MPLKotlinCoroutineContextElement <MPLKotlinCoroutineContext>
@required
@property (readonly) id<MPLKotlinCoroutineContextKey> key __attribute__((swift_name("key")));
@end;

__attribute__((swift_name("Job")))
@protocol MPLJob <MPLKotlinCoroutineContextElement>
@required
- (id<MPLChildHandle>)attachChildChild:(id<MPLChildJob>)child __attribute__((swift_name("attachChild(child:)")));
- (void)cancelCause:(MPLKotlinCancellationException * _Nullable)cause __attribute__((swift_name("cancel(cause:)")));
- (MPLKotlinCancellationException *)getCancellationException __attribute__((swift_name("getCancellationException()")));
- (id<MPLDisposableHandle>)invokeOnCompletionOnCancelling:(BOOL)onCancelling invokeImmediately:(BOOL)invokeImmediately handler:(void (^)(MPLKotlinThrowable * _Nullable))handler __attribute__((swift_name("invokeOnCompletion(onCancelling:invokeImmediately:handler:)")));
- (id<MPLDisposableHandle>)invokeOnCompletionHandler:(void (^)(MPLKotlinThrowable * _Nullable))handler __attribute__((swift_name("invokeOnCompletion(handler:)")));

/**
 @note This method converts instances of CancellationException to errors.
 Other uncaught Kotlin exceptions are fatal.
*/
- (void)joinWithCompletionHandler:(void (^)(MPLKotlinUnit * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("join(completionHandler:)")));
- (id<MPLJob>)plusOther:(id<MPLJob>)other __attribute__((swift_name("plus(other:)"))) __attribute__((unavailable("Operator '+' on two Job objects is meaningless. Job is a coroutine context element and `+` is a set-sum operator for coroutine contexts. The job to the right of `+` just replaces the job the left of `+`.")));
- (BOOL)start __attribute__((swift_name("start()")));
@property (readonly) id<MPLKotlinSequence> children __attribute__((swift_name("children")));
@property (readonly) BOOL isActive __attribute__((swift_name("isActive")));
@property (readonly) BOOL isCancelled __attribute__((swift_name("isCancelled")));
@property (readonly) BOOL isCompleted __attribute__((swift_name("isCompleted")));
@property (readonly) id<MPLSelectClause0> onJoin __attribute__((swift_name("onJoin")));
@end;

__attribute__((swift_name("ChildJob")))
@protocol MPLChildJob <MPLJob>
@required
- (void)parentCancelledParentJob:(id<MPLParentJob>)parentJob __attribute__((swift_name("parentCancelled(parentJob:)")));
@end;

__attribute__((swift_name("ParentJob")))
@protocol MPLParentJob <MPLJob>
@required
- (MPLKotlinCancellationException *)getChildJobCancellationCause __attribute__((swift_name("getChildJobCancellationCause()")));
@end;

__attribute__((swift_name("SelectClause0")))
@protocol MPLSelectClause0
@required
- (void)registerSelectClause0Select:(id<MPLSelectInstance>)select block:(id<MPLKotlinSuspendFunction0>)block __attribute__((swift_name("registerSelectClause0(select:block:)")));
@end;

__attribute__((swift_name("JobSupport")))
@interface MPLJobSupport : MPLBase <MPLJob, MPLChildJob, MPLParentJob, MPLSelectClause0>
- (instancetype)initWithActive:(BOOL)active __attribute__((swift_name("init(active:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable("This is internal API and may be removed in the future releases")));
- (void)afterCompletionState:(id _Nullable)state __attribute__((swift_name("afterCompletion(state:)")));
- (id<MPLChildHandle>)attachChildChild:(id<MPLChildJob>)child __attribute__((swift_name("attachChild(child:)")));
- (void)cancelCause:(MPLKotlinCancellationException * _Nullable)cause __attribute__((swift_name("cancel(cause:)")));
- (BOOL)cancelCoroutineCause:(MPLKotlinThrowable * _Nullable)cause __attribute__((swift_name("cancelCoroutine(cause:)")));
- (void)cancelInternalCause:(MPLKotlinThrowable *)cause __attribute__((swift_name("cancelInternal(cause:)")));
- (NSString *)cancellationExceptionMessage __attribute__((swift_name("cancellationExceptionMessage()")));
- (BOOL)childCancelledCause:(MPLKotlinThrowable *)cause __attribute__((swift_name("childCancelled(cause:)")));
- (MPLKotlinCancellationException *)getCancellationException __attribute__((swift_name("getCancellationException()")));
- (MPLKotlinCancellationException *)getChildJobCancellationCause __attribute__((swift_name("getChildJobCancellationCause()")));
- (MPLKotlinThrowable * _Nullable)getCompletionExceptionOrNull __attribute__((swift_name("getCompletionExceptionOrNull()")));
- (BOOL)handleJobExceptionException:(MPLKotlinThrowable *)exception __attribute__((swift_name("handleJobException(exception:)")));
- (id<MPLDisposableHandle>)invokeOnCompletionOnCancelling:(BOOL)onCancelling invokeImmediately:(BOOL)invokeImmediately handler:(void (^)(MPLKotlinThrowable * _Nullable))handler __attribute__((swift_name("invokeOnCompletion(onCancelling:invokeImmediately:handler:)")));
- (id<MPLDisposableHandle>)invokeOnCompletionHandler:(void (^)(MPLKotlinThrowable * _Nullable))handler __attribute__((swift_name("invokeOnCompletion(handler:)")));

/**
 @note This method converts instances of CancellationException to errors.
 Other uncaught Kotlin exceptions are fatal.
*/
- (void)joinWithCompletionHandler:(void (^)(MPLKotlinUnit * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("join(completionHandler:)")));
- (void)onCancellingCause:(MPLKotlinThrowable * _Nullable)cause __attribute__((swift_name("onCancelling(cause:)")));
- (void)onCompletionInternalState:(id _Nullable)state __attribute__((swift_name("onCompletionInternal(state:)")));
- (void)onStart __attribute__((swift_name("onStart()")));
- (void)parentCancelledParentJob:(id<MPLParentJob>)parentJob __attribute__((swift_name("parentCancelled(parentJob:)")));
- (void)registerSelectClause0Select:(id<MPLSelectInstance>)select block:(id<MPLKotlinSuspendFunction0>)block __attribute__((swift_name("registerSelectClause0(select:block:)")));
- (BOOL)start __attribute__((swift_name("start()")));
- (NSString *)toDebugString __attribute__((swift_name("toDebugString()")));
- (NSString *)description __attribute__((swift_name("description()")));
- (MPLKotlinCancellationException *)toCancellationException:(MPLKotlinThrowable *)receiver message:(NSString * _Nullable)message __attribute__((swift_name("toCancellationException(_:message:)")));
@property (readonly) id<MPLKotlinSequence> children __attribute__((swift_name("children")));
@property (readonly) MPLKotlinThrowable * _Nullable completionCause __attribute__((swift_name("completionCause")));
@property (readonly) BOOL completionCauseHandled __attribute__((swift_name("completionCauseHandled")));
@property (readonly) BOOL isActive __attribute__((swift_name("isActive")));
@property (readonly) BOOL isCancelled __attribute__((swift_name("isCancelled")));
@property (readonly) BOOL isCompleted __attribute__((swift_name("isCompleted")));
@property (readonly) BOOL isCompletedExceptionally __attribute__((swift_name("isCompletedExceptionally")));
@property (readonly) BOOL isScopedCoroutine __attribute__((swift_name("isScopedCoroutine")));
@property (readonly) id<MPLKotlinCoroutineContextKey> key __attribute__((swift_name("key")));
@property (readonly) id<MPLSelectClause0> onJoin __attribute__((swift_name("onJoin")));
@end;

__attribute__((swift_name("KotlinContinuation")))
@protocol MPLKotlinContinuation
@required
- (void)resumeWithResult:(id _Nullable)result __attribute__((swift_name("resumeWith(result:)")));
@property (readonly) id<MPLKotlinCoroutineContext> context __attribute__((swift_name("context")));
@end;

__attribute__((swift_name("CoroutineScope")))
@protocol MPLCoroutineScope
@required
@property (readonly) id<MPLKotlinCoroutineContext> coroutineContext __attribute__((swift_name("coroutineContext")));
@end;

__attribute__((swift_name("AbstractCoroutine")))
@interface MPLAbstractCoroutine<__contravariant T> : MPLJobSupport <MPLJob, MPLKotlinContinuation, MPLCoroutineScope>
- (instancetype)initWithParentContext:(id<MPLKotlinCoroutineContext>)parentContext initParentJob:(BOOL)initParentJob active:(BOOL)active __attribute__((swift_name("init(parentContext:initParentJob:active:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithActive:(BOOL)active __attribute__((swift_name("init(active:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
- (void)afterResumeState:(id _Nullable)state __attribute__((swift_name("afterResume(state:)")));
- (NSString *)cancellationExceptionMessage __attribute__((swift_name("cancellationExceptionMessage()")));
- (void)onCancelledCause:(MPLKotlinThrowable *)cause handled:(BOOL)handled __attribute__((swift_name("onCancelled(cause:handled:)")));
- (void)onCompletedValue:(T _Nullable)value __attribute__((swift_name("onCompleted(value:)")));
- (void)onCompletionInternalState:(id _Nullable)state __attribute__((swift_name("onCompletionInternal(state:)")));
- (void)resumeWithResult:(id _Nullable)result __attribute__((swift_name("resumeWith(result:)")));
- (void)startStart:(MPLCoroutineStart *)start receiver:(id _Nullable)receiver block:(id<MPLKotlinSuspendFunction1>)block __attribute__((swift_name("start(start:receiver:block:)")));
@property (readonly) id<MPLKotlinCoroutineContext> context __attribute__((swift_name("context")));
@property (readonly) id<MPLKotlinCoroutineContext> coroutineContext __attribute__((swift_name("coroutineContext")));
@property (readonly) BOOL isActive __attribute__((swift_name("isActive")));
@end;

__attribute__((swift_name("CancellableContinuation")))
@protocol MPLCancellableContinuation <MPLKotlinContinuation>
@required
- (BOOL)cancelCause_:(MPLKotlinThrowable * _Nullable)cause __attribute__((swift_name("cancel(cause_:)")));
- (void)completeResumeToken:(id)token __attribute__((swift_name("completeResume(token:)")));
- (void)doInitCancellability __attribute__((swift_name("doInitCancellability()")));
- (void)invokeOnCancellationHandler:(void (^)(MPLKotlinThrowable * _Nullable))handler __attribute__((swift_name("invokeOnCancellation(handler:)")));
- (void)resumeValue:(id _Nullable)value onCancellation:(void (^ _Nullable)(MPLKotlinThrowable *))onCancellation __attribute__((swift_name("resume(value:onCancellation:)")));
- (id _Nullable)tryResumeValue:(id _Nullable)value idempotent:(id _Nullable)idempotent __attribute__((swift_name("tryResume(value:idempotent:)")));
- (id _Nullable)tryResumeValue:(id _Nullable)value idempotent:(id _Nullable)idempotent onCancellation:(void (^ _Nullable)(MPLKotlinThrowable *))onCancellation __attribute__((swift_name("tryResume(value:idempotent:onCancellation:)")));
- (id _Nullable)tryResumeWithExceptionException:(MPLKotlinThrowable *)exception __attribute__((swift_name("tryResumeWithException(exception:)")));
- (void)resumeUndispatched:(MPLCoroutineDispatcher *)receiver value:(id _Nullable)value __attribute__((swift_name("resumeUndispatched(_:value:)")));
- (void)resumeUndispatchedWithException:(MPLCoroutineDispatcher *)receiver exception:(MPLKotlinThrowable *)exception __attribute__((swift_name("resumeUndispatchedWithException(_:exception:)")));
@property (readonly) BOOL isActive __attribute__((swift_name("isActive")));
@property (readonly) BOOL isCancelled __attribute__((swift_name("isCancelled")));
@property (readonly) BOOL isCompleted __attribute__((swift_name("isCompleted")));
@end;

__attribute__((swift_name("DisposableHandle")))
@protocol MPLDisposableHandle
@required
- (void)dispose __attribute__((swift_name("dispose()")));
@end;

__attribute__((swift_name("ChildHandle")))
@protocol MPLChildHandle <MPLDisposableHandle>
@required
- (BOOL)childCancelledCause:(MPLKotlinThrowable *)cause __attribute__((swift_name("childCancelled(cause:)")));
@property (readonly) id<MPLJob> _Nullable parent __attribute__((swift_name("parent")));
@end;

__attribute__((swift_name("KotlinAbstractCoroutineContextElement")))
@interface MPLKotlinAbstractCoroutineContextElement : MPLBase <MPLKotlinCoroutineContextElement>
- (instancetype)initWithKey:(id<MPLKotlinCoroutineContextKey>)key __attribute__((swift_name("init(key:)"))) __attribute__((objc_designated_initializer));
@property (readonly) id<MPLKotlinCoroutineContextKey> key __attribute__((swift_name("key")));
@end;

__attribute__((swift_name("KotlinContinuationInterceptor")))
@protocol MPLKotlinContinuationInterceptor <MPLKotlinCoroutineContextElement>
@required
- (id<MPLKotlinContinuation>)interceptContinuationContinuation:(id<MPLKotlinContinuation>)continuation __attribute__((swift_name("interceptContinuation(continuation:)")));
- (void)releaseInterceptedContinuationContinuation:(id<MPLKotlinContinuation>)continuation __attribute__((swift_name("releaseInterceptedContinuation(continuation:)")));
@end;

__attribute__((swift_name("CoroutineDispatcher")))
@interface MPLCoroutineDispatcher : MPLKotlinAbstractCoroutineContextElement <MPLKotlinContinuationInterceptor>
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (instancetype)initWithKey:(id<MPLKotlinCoroutineContextKey>)key __attribute__((swift_name("init(key:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly, getter=companion) MPLCoroutineDispatcherKey *companion __attribute__((swift_name("companion")));
- (void)dispatchContext:(id<MPLKotlinCoroutineContext>)context block:(id<MPLRunnable>)block __attribute__((swift_name("dispatch(context:block:)")));
- (void)dispatchYieldContext:(id<MPLKotlinCoroutineContext>)context block:(id<MPLRunnable>)block __attribute__((swift_name("dispatchYield(context:block:)")));
- (id<MPLKotlinContinuation>)interceptContinuationContinuation:(id<MPLKotlinContinuation>)continuation __attribute__((swift_name("interceptContinuation(continuation:)")));
- (BOOL)isDispatchNeededContext:(id<MPLKotlinCoroutineContext>)context __attribute__((swift_name("isDispatchNeeded(context:)")));
- (MPLCoroutineDispatcher *)limitedParallelismParallelism:(int32_t)parallelism __attribute__((swift_name("limitedParallelism(parallelism:)")));
- (MPLCoroutineDispatcher *)plusOther_:(MPLCoroutineDispatcher *)other __attribute__((swift_name("plus(other_:)"))) __attribute__((unavailable("Operator '+' on two CoroutineDispatcher objects is meaningless. CoroutineDispatcher is a coroutine context element and `+` is a set-sum operator for coroutine contexts. The dispatcher to the right of `+` just replaces the dispatcher to the left.")));
- (void)releaseInterceptedContinuationContinuation:(id<MPLKotlinContinuation>)continuation __attribute__((swift_name("releaseInterceptedContinuation(continuation:)")));
- (NSString *)description __attribute__((swift_name("description()")));
@end;

__attribute__((swift_name("CloseableCoroutineDispatcher")))
@interface MPLCloseableCoroutineDispatcher : MPLCoroutineDispatcher
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (void)close __attribute__((swift_name("close()")));
@property (readonly) int32_t worker __attribute__((swift_name("worker")));
@end;

__attribute__((swift_name("Deferred")))
@protocol MPLDeferred <MPLJob>
@required

/**
 @note This method converts instances of CancellationException to errors.
 Other uncaught Kotlin exceptions are fatal.
*/
- (void)awaitWithCompletionHandler:(void (^)(id _Nullable_result, NSError * _Nullable))completionHandler __attribute__((swift_name("await(completionHandler:)")));
- (id _Nullable)getCompleted __attribute__((swift_name("getCompleted()")));
- (MPLKotlinThrowable * _Nullable)getCompletionExceptionOrNull __attribute__((swift_name("getCompletionExceptionOrNull()")));
@property (readonly) id<MPLSelectClause1> onAwait __attribute__((swift_name("onAwait")));
@end;

__attribute__((swift_name("CompletableDeferred")))
@protocol MPLCompletableDeferred <MPLDeferred>
@required
- (BOOL)completeValue:(id _Nullable)value __attribute__((swift_name("complete(value:)")));
- (BOOL)completeExceptionallyException:(MPLKotlinThrowable *)exception __attribute__((swift_name("completeExceptionally(exception:)")));
@end;

__attribute__((swift_name("CompletableJob")))
@protocol MPLCompletableJob <MPLJob>
@required
- (BOOL)complete __attribute__((swift_name("complete()")));
- (BOOL)completeExceptionallyException:(MPLKotlinThrowable *)exception __attribute__((swift_name("completeExceptionally(exception:)")));
@end;

__attribute__((swift_name("KotlinThrowable")))
@interface MPLKotlinThrowable : MPLBase
- (instancetype)initWithMessage:(NSString * _Nullable)message __attribute__((swift_name("init(message:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithCause:(MPLKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(cause:)"))) __attribute__((objc_designated_initializer));
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (instancetype)initWithMessage:(NSString * _Nullable)message cause:(MPLKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(message:cause:)"))) __attribute__((objc_designated_initializer));
- (MPLKotlinArray<NSString *> *)getStackTrace __attribute__((swift_name("getStackTrace()")));
- (void)printStackTrace __attribute__((swift_name("printStackTrace()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) MPLKotlinThrowable * _Nullable cause __attribute__((swift_name("cause")));
@property (readonly) NSString * _Nullable message __attribute__((swift_name("message")));
- (NSError *)asError __attribute__((swift_name("asError()")));
@end;

__attribute__((swift_name("KotlinException")))
@interface MPLKotlinException : MPLKotlinThrowable
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (instancetype)initWithMessage:(NSString * _Nullable)message __attribute__((swift_name("init(message:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithMessage:(NSString * _Nullable)message cause:(MPLKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(message:cause:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithCause:(MPLKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(cause:)"))) __attribute__((objc_designated_initializer));
@end;

__attribute__((swift_name("KotlinRuntimeException")))
@interface MPLKotlinRuntimeException : MPLKotlinException
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (instancetype)initWithMessage:(NSString * _Nullable)message __attribute__((swift_name("init(message:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithMessage:(NSString * _Nullable)message cause:(MPLKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(message:cause:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithCause:(MPLKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(cause:)"))) __attribute__((objc_designated_initializer));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CompletionHandlerException")))
@interface MPLCompletionHandlerException : MPLKotlinRuntimeException
- (instancetype)initWithMessage:(NSString *)message cause:(MPLKotlinThrowable *)cause __attribute__((swift_name("init(message:cause:)"))) __attribute__((objc_designated_initializer));
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
+ (instancetype)new __attribute__((unavailable));
- (instancetype)initWithMessage:(NSString * _Nullable)message __attribute__((swift_name("init(message:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
- (instancetype)initWithCause:(MPLKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(cause:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@end;

__attribute__((swift_name("CopyableThrowable")))
@protocol MPLCopyableThrowable
@required
- (MPLKotlinThrowable * _Nullable)createCopy __attribute__((swift_name("createCopy()")));
@end;

__attribute__((swift_name("KotlinCoroutineContextKey")))
@protocol MPLKotlinCoroutineContextKey
@required
@end;

__attribute__((swift_name("KotlinAbstractCoroutineContextKey")))
@interface MPLKotlinAbstractCoroutineContextKey<B, E> : MPLBase <MPLKotlinCoroutineContextKey>
- (instancetype)initWithBaseKey:(id<MPLKotlinCoroutineContextKey>)baseKey safeCast:(E _Nullable (^)(id<MPLKotlinCoroutineContextElement>))safeCast __attribute__((swift_name("init(baseKey:safeCast:)"))) __attribute__((objc_designated_initializer));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoroutineDispatcher.Key")))
@interface MPLCoroutineDispatcherKey : MPLKotlinAbstractCoroutineContextKey<id<MPLKotlinContinuationInterceptor>, MPLCoroutineDispatcher *>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)initWithBaseKey:(id<MPLKotlinCoroutineContextKey>)baseKey safeCast:(id<MPLKotlinCoroutineContextElement> _Nullable (^)(id<MPLKotlinCoroutineContextElement>))safeCast __attribute__((swift_name("init(baseKey:safeCast:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
+ (instancetype)key __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) MPLCoroutineDispatcherKey *shared __attribute__((swift_name("shared")));
@end;

__attribute__((swift_name("CoroutineExceptionHandler")))
@protocol MPLCoroutineExceptionHandler <MPLKotlinCoroutineContextElement>
@required
- (void)handleExceptionContext:(id<MPLKotlinCoroutineContext>)context exception:(MPLKotlinThrowable *)exception __attribute__((swift_name("handleException(context:exception:)")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoroutineExceptionHandlerKey")))
@interface MPLCoroutineExceptionHandlerKey : MPLBase <MPLKotlinCoroutineContextKey>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)key __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) MPLCoroutineExceptionHandlerKey *shared __attribute__((swift_name("shared")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoroutineName")))
@interface MPLCoroutineName : MPLKotlinAbstractCoroutineContextElement
- (instancetype)initWithName:(NSString *)name __attribute__((swift_name("init(name:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithKey:(id<MPLKotlinCoroutineContextKey>)key __attribute__((swift_name("init(key:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly, getter=companion) MPLCoroutineNameKey *companion __attribute__((swift_name("companion")));
- (NSString *)component1 __attribute__((swift_name("component1()")));
- (MPLCoroutineName *)doCopyName:(NSString *)name __attribute__((swift_name("doCopy(name:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString *name __attribute__((swift_name("name")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoroutineName.Key")))
@interface MPLCoroutineNameKey : MPLBase <MPLKotlinCoroutineContextKey>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)key __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) MPLCoroutineNameKey *shared __attribute__((swift_name("shared")));
@end;

__attribute__((swift_name("KotlinComparable")))
@protocol MPLKotlinComparable
@required
- (int32_t)compareToOther:(id _Nullable)other __attribute__((swift_name("compareTo(other:)")));
@end;

__attribute__((swift_name("KotlinEnum")))
@interface MPLKotlinEnum<E> : MPLBase <MPLKotlinComparable>
- (instancetype)initWithName:(NSString *)name ordinal:(int32_t)ordinal __attribute__((swift_name("init(name:ordinal:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) MPLKotlinEnumCompanion *companion __attribute__((swift_name("companion")));
- (int32_t)compareToOther:(E)other __attribute__((swift_name("compareTo(other:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString *name __attribute__((swift_name("name")));
@property (readonly) int32_t ordinal __attribute__((swift_name("ordinal")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoroutineStart")))
@interface MPLCoroutineStart : MPLKotlinEnum<MPLCoroutineStart *>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)initWithName:(NSString *)name ordinal:(int32_t)ordinal __attribute__((swift_name("init(name:ordinal:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly) MPLCoroutineStart *default_ __attribute__((swift_name("default_")));
@property (class, readonly) MPLCoroutineStart *lazy __attribute__((swift_name("lazy")));
@property (class, readonly) MPLCoroutineStart *atomic __attribute__((swift_name("atomic")));
@property (class, readonly) MPLCoroutineStart *undispatched __attribute__((swift_name("undispatched")));
+ (MPLKotlinArray<MPLCoroutineStart *> *)values __attribute__((swift_name("values()")));
@property (readonly) BOOL isLazy __attribute__((swift_name("isLazy")));
@end;

__attribute__((swift_name("Delay")))
@protocol MPLDelay
@required

/**
 @note This method converts instances of CancellationException to errors.
 Other uncaught Kotlin exceptions are fatal.
*/
- (void)delayTime:(int64_t)time completionHandler:(void (^)(MPLKotlinUnit * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("delay(time:completionHandler:)"))) __attribute__((unavailable("Deprecated without replacement as an internal method never intended for public use")));
- (id<MPLDisposableHandle>)invokeOnTimeoutTimeMillis:(int64_t)timeMillis block:(id<MPLRunnable>)block context:(id<MPLKotlinCoroutineContext>)context __attribute__((swift_name("invokeOnTimeout(timeMillis:block:context:)")));
- (void)scheduleResumeAfterDelayTimeMillis:(int64_t)timeMillis continuation:(id<MPLCancellableContinuation>)continuation __attribute__((swift_name("scheduleResumeAfterDelay(timeMillis:continuation:)")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Dispatchers")))
@interface MPLDispatchers : MPLBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)dispatchers __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) MPLDispatchers *shared __attribute__((swift_name("shared")));
@property (readonly) MPLCoroutineDispatcher *Default __attribute__((swift_name("Default")));
@property (readonly) MPLMainCoroutineDispatcher *Main __attribute__((swift_name("Main")));
@property (readonly) MPLCoroutineDispatcher *Unconfined __attribute__((swift_name("Unconfined")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("GlobalScope")))
@interface MPLGlobalScope : MPLBase <MPLCoroutineScope>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)globalScope __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) MPLGlobalScope *shared __attribute__((swift_name("shared")));
@property (readonly) id<MPLKotlinCoroutineContext> coroutineContext __attribute__((swift_name("coroutineContext")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("JobKey")))
@interface MPLJobKey : MPLBase <MPLKotlinCoroutineContextKey>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)key __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) MPLJobKey *shared __attribute__((swift_name("shared")));
@end;

__attribute__((swift_name("MainCoroutineDispatcher")))
@interface MPLMainCoroutineDispatcher : MPLCoroutineDispatcher
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (MPLCoroutineDispatcher *)limitedParallelismParallelism:(int32_t)parallelism __attribute__((swift_name("limitedParallelism(parallelism:)")));
- (NSString *)description __attribute__((swift_name("description()")));
- (NSString * _Nullable)toStringInternalImpl __attribute__((swift_name("toStringInternalImpl()")));
@property (readonly) MPLMainCoroutineDispatcher *immediate __attribute__((swift_name("immediate")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("NonCancellable")))
@interface MPLNonCancellable : MPLKotlinAbstractCoroutineContextElement <MPLJob>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)initWithKey:(id<MPLKotlinCoroutineContextKey>)key __attribute__((swift_name("init(key:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
+ (instancetype)nonCancellable __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) MPLNonCancellable *shared __attribute__((swift_name("shared")));
- (id<MPLChildHandle>)attachChildChild:(id<MPLChildJob>)child __attribute__((swift_name("attachChild(child:)"))) __attribute__((deprecated("NonCancellable can be used only as an argument for 'withContext', direct usages of its API are prohibited")));
- (void)cancelCause:(MPLKotlinCancellationException * _Nullable)cause __attribute__((swift_name("cancel(cause:)"))) __attribute__((deprecated("NonCancellable can be used only as an argument for 'withContext', direct usages of its API are prohibited")));
- (MPLKotlinCancellationException *)getCancellationException __attribute__((swift_name("getCancellationException()"))) __attribute__((deprecated("NonCancellable can be used only as an argument for 'withContext', direct usages of its API are prohibited")));
- (id<MPLDisposableHandle>)invokeOnCompletionOnCancelling:(BOOL)onCancelling invokeImmediately:(BOOL)invokeImmediately handler:(void (^)(MPLKotlinThrowable * _Nullable))handler __attribute__((swift_name("invokeOnCompletion(onCancelling:invokeImmediately:handler:)"))) __attribute__((deprecated("NonCancellable can be used only as an argument for 'withContext', direct usages of its API are prohibited")));
- (id<MPLDisposableHandle>)invokeOnCompletionHandler:(void (^)(MPLKotlinThrowable * _Nullable))handler __attribute__((swift_name("invokeOnCompletion(handler:)"))) __attribute__((deprecated("NonCancellable can be used only as an argument for 'withContext', direct usages of its API are prohibited")));

/**
 @note This method converts instances of CancellationException to errors.
 Other uncaught Kotlin exceptions are fatal.
*/
- (void)joinWithCompletionHandler:(void (^)(MPLKotlinUnit * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("join(completionHandler:)"))) __attribute__((deprecated("NonCancellable can be used only as an argument for 'withContext', direct usages of its API are prohibited")));
- (BOOL)start __attribute__((swift_name("start()"))) __attribute__((deprecated("NonCancellable can be used only as an argument for 'withContext', direct usages of its API are prohibited")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) id<MPLKotlinSequence> children __attribute__((swift_name("children"))) __attribute__((deprecated("NonCancellable can be used only as an argument for 'withContext', direct usages of its API are prohibited")));
@property (readonly) BOOL isActive __attribute__((swift_name("isActive"))) __attribute__((deprecated("NonCancellable can be used only as an argument for 'withContext', direct usages of its API are prohibited")));
@property (readonly) BOOL isCancelled __attribute__((swift_name("isCancelled"))) __attribute__((deprecated("NonCancellable can be used only as an argument for 'withContext', direct usages of its API are prohibited")));
@property (readonly) BOOL isCompleted __attribute__((swift_name("isCompleted"))) __attribute__((deprecated("NonCancellable can be used only as an argument for 'withContext', direct usages of its API are prohibited")));
@property (readonly) id<MPLSelectClause0> onJoin __attribute__((swift_name("onJoin"))) __attribute__((deprecated("NonCancellable can be used only as an argument for 'withContext', direct usages of its API are prohibited")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("NonDisposableHandle")))
@interface MPLNonDisposableHandle : MPLBase <MPLDisposableHandle, MPLChildHandle>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)nonDisposableHandle __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) MPLNonDisposableHandle *shared __attribute__((swift_name("shared")));
- (BOOL)childCancelledCause:(MPLKotlinThrowable *)cause __attribute__((swift_name("childCancelled(cause:)")));
- (void)dispose __attribute__((swift_name("dispose()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) id<MPLJob> _Nullable parent __attribute__((swift_name("parent")));
@end;

__attribute__((swift_name("Runnable")))
@protocol MPLRunnable
@required
- (void)run __attribute__((swift_name("run()")));
@end;

__attribute__((swift_name("KotlinIllegalStateException")))
@interface MPLKotlinIllegalStateException : MPLKotlinRuntimeException
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (instancetype)initWithMessage:(NSString * _Nullable)message __attribute__((swift_name("init(message:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithMessage:(NSString * _Nullable)message cause:(MPLKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(message:cause:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithCause:(MPLKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(cause:)"))) __attribute__((objc_designated_initializer));
@end;

__attribute__((swift_name("KotlinCancellationException")))
@interface MPLKotlinCancellationException : MPLKotlinIllegalStateException
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (instancetype)initWithMessage:(NSString * _Nullable)message __attribute__((swift_name("init(message:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithMessage:(NSString * _Nullable)message cause:(MPLKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(message:cause:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithCause:(MPLKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(cause:)"))) __attribute__((objc_designated_initializer));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("TimeoutCancellationException")))
@interface MPLTimeoutCancellationException : MPLKotlinCancellationException <MPLCopyableThrowable>
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
+ (instancetype)new __attribute__((unavailable));
- (instancetype)initWithMessage:(NSString * _Nullable)message __attribute__((swift_name("init(message:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
- (instancetype)initWithMessage:(NSString * _Nullable)message cause:(MPLKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(message:cause:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
- (instancetype)initWithCause:(MPLKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(cause:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
- (MPLTimeoutCancellationException * _Nullable)createCopy __attribute__((swift_name("createCopy()")));
@end;

__attribute__((swift_name("SendChannel")))
@protocol MPLSendChannel
@required
- (BOOL)closeCause:(MPLKotlinThrowable * _Nullable)cause __attribute__((swift_name("close(cause:)")));
- (void)invokeOnCloseHandler:(void (^)(MPLKotlinThrowable * _Nullable))handler __attribute__((swift_name("invokeOnClose(handler:)")));
- (BOOL)offerElement:(id _Nullable)element __attribute__((swift_name("offer(element:)"))) __attribute__((unavailable("Deprecated in the favour of 'trySend' method")));

/**
 @note This method converts instances of CancellationException to errors.
 Other uncaught Kotlin exceptions are fatal.
*/
- (void)sendElement:(id _Nullable)element completionHandler:(void (^)(MPLKotlinUnit * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("send(element:completionHandler:)")));
- (id _Nullable)trySendElement:(id _Nullable)element __attribute__((swift_name("trySend(element:)")));
@property (readonly) BOOL isClosedForSend __attribute__((swift_name("isClosedForSend")));
@property (readonly) id<MPLSelectClause2> onSend __attribute__((swift_name("onSend")));
@end;

__attribute__((swift_name("BroadcastChannel")))
@protocol MPLBroadcastChannel <MPLSendChannel>
@required
- (void)cancelCause:(MPLKotlinCancellationException * _Nullable)cause __attribute__((swift_name("cancel(cause:)")));
- (id<MPLReceiveChannel>)openSubscription __attribute__((swift_name("openSubscription()")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("BufferOverflow")))
@interface MPLBufferOverflow : MPLKotlinEnum<MPLBufferOverflow *>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)initWithName:(NSString *)name ordinal:(int32_t)ordinal __attribute__((swift_name("init(name:ordinal:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly) MPLBufferOverflow *suspend __attribute__((swift_name("suspend")));
@property (class, readonly) MPLBufferOverflow *dropOldest __attribute__((swift_name("dropOldest")));
@property (class, readonly) MPLBufferOverflow *dropLatest __attribute__((swift_name("dropLatest")));
+ (MPLKotlinArray<MPLBufferOverflow *> *)values __attribute__((swift_name("values()")));
@end;

__attribute__((swift_name("ReceiveChannel")))
@protocol MPLReceiveChannel
@required
- (void)cancelCause:(MPLKotlinCancellationException * _Nullable)cause __attribute__((swift_name("cancel(cause:)")));
- (id<MPLChannelIterator>)iterator __attribute__((swift_name("iterator()")));
- (id _Nullable)poll __attribute__((swift_name("poll()"))) __attribute__((unavailable("Deprecated in the favour of 'tryReceive'. Please note that the provided replacement does not rethrow channel's close cause as 'poll' did, for the precise replacement please refer to the 'poll' documentation")));

/**
 @note This method converts instances of CancellationException to errors.
 Other uncaught Kotlin exceptions are fatal.
*/
- (void)receiveWithCompletionHandler:(void (^)(id _Nullable_result, NSError * _Nullable))completionHandler __attribute__((swift_name("receive(completionHandler:)")));

/**
 @note This method converts instances of CancellationException to errors.
 Other uncaught Kotlin exceptions are fatal.
*/
- (void)receiveCatchingWithCompletionHandler:(void (^)(id _Nullable_result, NSError * _Nullable))completionHandler __attribute__((swift_name("receiveCatching(completionHandler:)")));

/**
 @note This method converts instances of CancellationException to errors.
 Other uncaught Kotlin exceptions are fatal.
*/
- (void)receiveOrNullWithCompletionHandler:(void (^)(id _Nullable_result, NSError * _Nullable))completionHandler __attribute__((swift_name("receiveOrNull(completionHandler:)"))) __attribute__((unavailable("Deprecated in favor of 'receiveCatching'. Please note that the provided replacement does not rethrow channel's close cause as 'receiveOrNull' did, for the detailed replacement please refer to the 'receiveOrNull' documentation")));
- (id _Nullable)tryReceive __attribute__((swift_name("tryReceive()")));
@property (readonly) BOOL isClosedForReceive __attribute__((swift_name("isClosedForReceive")));
@property (readonly) BOOL isEmpty __attribute__((swift_name("isEmpty")));
@property (readonly) id<MPLSelectClause1> onReceive __attribute__((swift_name("onReceive")));
@property (readonly) id<MPLSelectClause1> onReceiveCatching __attribute__((swift_name("onReceiveCatching")));
@property (readonly) id<MPLSelectClause1> onReceiveOrNull __attribute__((swift_name("onReceiveOrNull"))) __attribute__((unavailable("Deprecated in favor of onReceiveCatching extension")));
@end;

__attribute__((swift_name("Channel")))
@protocol MPLChannel <MPLSendChannel, MPLReceiveChannel>
@required
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ChannelFactory")))
@interface MPLChannelFactory : MPLBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)factory __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) MPLChannelFactory *shared __attribute__((swift_name("shared")));
@property (readonly) int32_t BUFFERED __attribute__((swift_name("BUFFERED")));
@property (readonly) int32_t CONFLATED __attribute__((swift_name("CONFLATED")));
@property (readonly) NSString *DEFAULT_BUFFER_PROPERTY_NAME __attribute__((swift_name("DEFAULT_BUFFER_PROPERTY_NAME")));
@property (readonly) int32_t RENDEZVOUS __attribute__((swift_name("RENDEZVOUS")));
@property (readonly) int32_t UNLIMITED __attribute__((swift_name("UNLIMITED")));
@end;

__attribute__((swift_name("ChannelIterator")))
@protocol MPLChannelIterator
@required

/**
 @note This method converts instances of CancellationException to errors.
 Other uncaught Kotlin exceptions are fatal.
*/
- (void)hasNextWithCompletionHandler:(void (^)(MPLBoolean * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("hasNext(completionHandler:)")));
- (id _Nullable)next __attribute__((swift_name("next()")));
@end;

__attribute__((swift_name("KotlinNoSuchElementException")))
@interface MPLKotlinNoSuchElementException : MPLKotlinRuntimeException
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (instancetype)initWithMessage:(NSString * _Nullable)message __attribute__((swift_name("init(message:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithMessage:(NSString * _Nullable)message cause:(MPLKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(message:cause:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
- (instancetype)initWithCause:(MPLKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(cause:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ClosedReceiveChannelException")))
@interface MPLClosedReceiveChannelException : MPLKotlinNoSuchElementException
- (instancetype)initWithMessage:(NSString * _Nullable)message __attribute__((swift_name("init(message:)"))) __attribute__((objc_designated_initializer));
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
+ (instancetype)new __attribute__((unavailable));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ClosedSendChannelException")))
@interface MPLClosedSendChannelException : MPLKotlinIllegalStateException
- (instancetype)initWithMessage:(NSString * _Nullable)message __attribute__((swift_name("init(message:)"))) __attribute__((objc_designated_initializer));
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
+ (instancetype)new __attribute__((unavailable));
- (instancetype)initWithMessage:(NSString * _Nullable)message cause:(MPLKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(message:cause:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
- (instancetype)initWithCause:(MPLKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(cause:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ConflatedBroadcastChannel")))
@interface MPLConflatedBroadcastChannel<E> : MPLBase <MPLBroadcastChannel>
- (instancetype)initWithValue:(E _Nullable)value __attribute__((swift_name("init(value:)"))) __attribute__((objc_designated_initializer));
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (void)cancelCause:(MPLKotlinCancellationException * _Nullable)cause __attribute__((swift_name("cancel(cause:)")));
- (BOOL)closeCause:(MPLKotlinThrowable * _Nullable)cause __attribute__((swift_name("close(cause:)")));
- (void)invokeOnCloseHandler:(void (^)(MPLKotlinThrowable * _Nullable))handler __attribute__((swift_name("invokeOnClose(handler:)")));
- (id<MPLReceiveChannel>)openSubscription __attribute__((swift_name("openSubscription()")));

/**
 @note This method converts instances of CancellationException to errors.
 Other uncaught Kotlin exceptions are fatal.
*/
- (void)sendElement:(E _Nullable)element completionHandler:(void (^)(MPLKotlinUnit * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("send(element:completionHandler:)")));
- (id _Nullable)trySendElement:(E _Nullable)element __attribute__((swift_name("trySend(element:)")));
@property (readonly) BOOL isClosedForSend __attribute__((swift_name("isClosedForSend")));
@property (readonly) id<MPLSelectClause2> onSend __attribute__((swift_name("onSend")));
@property (readonly) E _Nullable value __attribute__((swift_name("value")));
@property (readonly) E _Nullable valueOrNull __attribute__((swift_name("valueOrNull")));
@end;

__attribute__((swift_name("ProducerScope")))
@protocol MPLProducerScope <MPLCoroutineScope, MPLSendChannel>
@required
@property (readonly) id<MPLSendChannel> channel __attribute__((swift_name("channel")));
@end;

__attribute__((swift_name("Flow")))
@protocol MPLFlow
@required

/**
 @note This method converts instances of CancellationException to errors.
 Other uncaught Kotlin exceptions are fatal.
*/
- (void)collectCollector:(id<MPLFlowCollector>)collector completionHandler:(void (^)(MPLKotlinUnit * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("collect(collector:completionHandler:)")));
@end;

__attribute__((swift_name("AbstractFlow")))
@interface MPLAbstractFlow<T> : MPLBase <MPLFlow>
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));

/**
 @note This method converts instances of CancellationException to errors.
 Other uncaught Kotlin exceptions are fatal.
*/
- (void)collectCollector:(id<MPLFlowCollector>)collector completionHandler:(void (^)(MPLKotlinUnit * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("collect(collector:completionHandler:)")));

/**
 @note This method converts instances of CancellationException to errors.
 Other uncaught Kotlin exceptions are fatal.
*/
- (void)collectSafelyCollector:(id<MPLFlowCollector>)collector completionHandler:(void (^)(MPLKotlinUnit * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("collectSafely(collector:completionHandler:)")));
@end;

__attribute__((swift_name("FlowCollector")))
@protocol MPLFlowCollector
@required

/**
 @note This method converts instances of CancellationException to errors.
 Other uncaught Kotlin exceptions are fatal.
*/
- (void)emitValue:(id _Nullable)value completionHandler:(void (^)(MPLKotlinUnit * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("emit(value:completionHandler:)")));
@end;

__attribute__((swift_name("SharedFlow")))
@protocol MPLSharedFlow <MPLFlow>
@required
@property (readonly) NSArray<id> *replayCache __attribute__((swift_name("replayCache")));
@end;

__attribute__((swift_name("MutableSharedFlow")))
@protocol MPLMutableSharedFlow <MPLSharedFlow, MPLFlowCollector>
@required
- (void)resetReplayCache __attribute__((swift_name("resetReplayCache()")));
- (BOOL)tryEmitValue:(id _Nullable)value __attribute__((swift_name("tryEmit(value:)")));
@property (readonly) id<MPLStateFlow> subscriptionCount __attribute__((swift_name("subscriptionCount")));
@end;

__attribute__((swift_name("StateFlow")))
@protocol MPLStateFlow <MPLSharedFlow>
@required
@property (readonly) id _Nullable value __attribute__((swift_name("value")));
@end;

__attribute__((swift_name("MutableStateFlow")))
@protocol MPLMutableStateFlow <MPLStateFlow, MPLMutableSharedFlow>
@required
- (BOOL)compareAndSetExpect:(id _Nullable)expect update:(id _Nullable)update __attribute__((swift_name("compareAndSet(expect:update:)")));
- (void)setValue:(id _Nullable)value __attribute__((swift_name("setValue(_:)")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("SharingCommand")))
@interface MPLSharingCommand : MPLKotlinEnum<MPLSharingCommand *>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)initWithName:(NSString *)name ordinal:(int32_t)ordinal __attribute__((swift_name("init(name:ordinal:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly) MPLSharingCommand *start __attribute__((swift_name("start")));
@property (class, readonly) MPLSharingCommand *stop __attribute__((swift_name("stop")));
@property (class, readonly) MPLSharingCommand *stopAndResetReplayCache __attribute__((swift_name("stopAndResetReplayCache")));
+ (MPLKotlinArray<MPLSharingCommand *> *)values __attribute__((swift_name("values()")));
@end;

__attribute__((swift_name("SharingStarted")))
@protocol MPLSharingStarted
@required
- (id<MPLFlow>)commandSubscriptionCount:(id<MPLStateFlow>)subscriptionCount __attribute__((swift_name("command(subscriptionCount:)")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("SharingStartedCompanion")))
@interface MPLSharingStartedCompanion : MPLBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) MPLSharingStartedCompanion *shared __attribute__((swift_name("shared")));
- (id<MPLSharingStarted>)WhileSubscribedStopTimeoutMillis:(int64_t)stopTimeoutMillis replayExpirationMillis:(int64_t)replayExpirationMillis __attribute__((swift_name("WhileSubscribed(stopTimeoutMillis:replayExpirationMillis:)")));
@property (readonly) id<MPLSharingStarted> Eagerly __attribute__((swift_name("Eagerly")));
@property (readonly) id<MPLSharingStarted> Lazily __attribute__((swift_name("Lazily")));
@end;

__attribute__((swift_name("FusibleFlow")))
@protocol MPLFusibleFlow <MPLFlow>
@required
- (id<MPLFlow>)fuseContext:(id<MPLKotlinCoroutineContext>)context capacity:(int32_t)capacity onBufferOverflow:(MPLBufferOverflow *)onBufferOverflow __attribute__((swift_name("fuse(context:capacity:onBufferOverflow:)")));
@end;

__attribute__((swift_name("ChannelFlow")))
@interface MPLChannelFlow<T> : MPLBase <MPLFusibleFlow>
- (instancetype)initWithContext:(id<MPLKotlinCoroutineContext>)context capacity:(int32_t)capacity onBufferOverflow:(MPLBufferOverflow *)onBufferOverflow __attribute__((swift_name("init(context:capacity:onBufferOverflow:)"))) __attribute__((objc_designated_initializer));
- (NSString * _Nullable)additionalToStringProps __attribute__((swift_name("additionalToStringProps()")));

/**
 @note This method converts instances of CancellationException to errors.
 Other uncaught Kotlin exceptions are fatal.
*/
- (void)collectCollector:(id<MPLFlowCollector>)collector completionHandler:(void (^)(MPLKotlinUnit * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("collect(collector:completionHandler:)")));

/**
 @note This method converts instances of CancellationException to errors.
 Other uncaught Kotlin exceptions are fatal.
*/
- (void)collectToScope:(id<MPLProducerScope>)scope completionHandler:(void (^)(MPLKotlinUnit * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("collectTo(scope:completionHandler:)")));
- (MPLChannelFlow<T> *)createContext:(id<MPLKotlinCoroutineContext>)context capacity:(int32_t)capacity onBufferOverflow:(MPLBufferOverflow *)onBufferOverflow __attribute__((swift_name("create(context:capacity:onBufferOverflow:)")));
- (id<MPLFlow> _Nullable)dropChannelOperators __attribute__((swift_name("dropChannelOperators()")));
- (id<MPLFlow>)fuseContext:(id<MPLKotlinCoroutineContext>)context capacity:(int32_t)capacity onBufferOverflow:(MPLBufferOverflow *)onBufferOverflow __attribute__((swift_name("fuse(context:capacity:onBufferOverflow:)")));
- (id<MPLReceiveChannel>)produceImplScope:(id<MPLCoroutineScope>)scope __attribute__((swift_name("produceImpl(scope:)")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) int32_t capacity __attribute__((swift_name("capacity")));
@property (readonly) id<MPLKotlinCoroutineContext> context __attribute__((swift_name("context")));
@property (readonly) MPLBufferOverflow *onBufferOverflow __attribute__((swift_name("onBufferOverflow")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("SendingCollector")))
@interface MPLSendingCollector<T> : MPLBase <MPLFlowCollector>
- (instancetype)initWithChannel:(id<MPLSendChannel>)channel __attribute__((swift_name("init(channel:)"))) __attribute__((objc_designated_initializer));

/**
 @note This method converts instances of CancellationException to errors.
 Other uncaught Kotlin exceptions are fatal.
*/
- (void)emitValue:(T _Nullable)value completionHandler:(void (^)(MPLKotlinUnit * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("emit(value:completionHandler:)")));
@end;

__attribute__((swift_name("SelectBuilder")))
@protocol MPLSelectBuilder
@required
- (void)onTimeoutTimeMillis:(int64_t)timeMillis block:(id<MPLKotlinSuspendFunction0>)block __attribute__((swift_name("onTimeout(timeMillis:block:)")));
- (void)invoke:(id<MPLSelectClause0>)receiver block:(id<MPLKotlinSuspendFunction0>)block __attribute__((swift_name("invoke(_:block:)")));
- (void)invoke:(id<MPLSelectClause1>)receiver block_:(id<MPLKotlinSuspendFunction1>)block __attribute__((swift_name("invoke(_:block_:)")));
- (void)invoke:(id<MPLSelectClause2>)receiver param:(id _Nullable)param block:(id<MPLKotlinSuspendFunction1>)block __attribute__((swift_name("invoke(_:param:block:)")));
- (void)invoke:(id<MPLSelectClause2>)receiver block__:(id<MPLKotlinSuspendFunction1>)block __attribute__((swift_name("invoke(_:block__:)")));
@end;

__attribute__((swift_name("SelectClause1")))
@protocol MPLSelectClause1
@required
- (void)registerSelectClause1Select:(id<MPLSelectInstance>)select block:(id<MPLKotlinSuspendFunction1>)block __attribute__((swift_name("registerSelectClause1(select:block:)")));
@end;

__attribute__((swift_name("SelectClause2")))
@protocol MPLSelectClause2
@required
- (void)registerSelectClause2Select:(id<MPLSelectInstance>)select param:(id _Nullable)param block:(id<MPLKotlinSuspendFunction1>)block __attribute__((swift_name("registerSelectClause2(select:param:block:)")));
@end;

__attribute__((swift_name("SelectInstance")))
@protocol MPLSelectInstance
@required
- (void)disposeOnSelectHandle:(id<MPLDisposableHandle>)handle __attribute__((swift_name("disposeOnSelect(handle:)")));
- (id _Nullable)performAtomicTrySelectDesc:(MPLAtomicDesc *)desc __attribute__((swift_name("performAtomicTrySelect(desc:)")));
- (void)resumeSelectWithExceptionException:(MPLKotlinThrowable *)exception __attribute__((swift_name("resumeSelectWithException(exception:)")));
- (BOOL)trySelect __attribute__((swift_name("trySelect()")));
- (id _Nullable)trySelectOtherOtherOp:(MPLLockFreeLinkedListNodePrepareOp * _Nullable)otherOp __attribute__((swift_name("trySelectOther(otherOp:)")));
@property (readonly) id<MPLKotlinContinuation> completion __attribute__((swift_name("completion")));
@property (readonly) BOOL isSelected __attribute__((swift_name("isSelected")));
@end;

__attribute__((swift_name("AtomicDesc")))
@interface MPLAtomicDesc : MPLBase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (void)completeOp:(MPLAtomicOp<id> *)op failure:(id _Nullable)failure __attribute__((swift_name("complete(op:failure:)")));
- (id _Nullable)prepareOp:(MPLAtomicOp<id> *)op __attribute__((swift_name("prepare(op:)")));
@property MPLAtomicOp<id> *atomicOp __attribute__((swift_name("atomicOp")));
@end;

__attribute__((swift_name("OpDescriptor")))
@interface MPLOpDescriptor : MPLBase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (BOOL)isEarlierThanThat:(MPLOpDescriptor *)that __attribute__((swift_name("isEarlierThan(that:)")));
- (id _Nullable)performAffected:(id _Nullable)affected __attribute__((swift_name("perform(affected:)")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) MPLAtomicOp<id> * _Nullable atomicOp __attribute__((swift_name("atomicOp")));
@end;

__attribute__((swift_name("AtomicOp")))
@interface MPLAtomicOp<__contravariant T> : MPLOpDescriptor
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (void)completeAffected:(T _Nullable)affected failure:(id _Nullable)failure __attribute__((swift_name("complete(affected:failure:)")));
- (id _Nullable)decideDecision:(id _Nullable)decision __attribute__((swift_name("decide(decision:)")));
- (id _Nullable)performAffected:(id _Nullable)affected __attribute__((swift_name("perform(affected:)")));
- (id _Nullable)prepareAffected:(T _Nullable)affected __attribute__((swift_name("prepare(affected:)")));
@property (readonly) MPLAtomicOp<id> *atomicOp __attribute__((swift_name("atomicOp")));
@property (readonly) id _Nullable consensus __attribute__((swift_name("consensus")));
@property (readonly) BOOL isDecided __attribute__((swift_name("isDecided")));
@property (readonly) int64_t opSequence __attribute__((swift_name("opSequence")));
@end;

__attribute__((swift_name("LockFreeLinkedListNode")))
@interface MPLLockFreeLinkedListNode : MPLBase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (void)addLastNode:(MPLLockFreeLinkedListNode *)node __attribute__((swift_name("addLast(node:)")));
- (BOOL)addLastIfNode:(MPLLockFreeLinkedListNode *)node condition:(MPLBoolean *(^)(void))condition __attribute__((swift_name("addLastIf(node:condition:)")));
- (BOOL)addLastIfPrevNode:(MPLLockFreeLinkedListNode *)node predicate:(MPLBoolean *(^)(MPLLockFreeLinkedListNode *))predicate __attribute__((swift_name("addLastIfPrev(node:predicate:)")));
- (BOOL)addLastIfPrevAndIfNode:(MPLLockFreeLinkedListNode *)node predicate:(MPLBoolean *(^)(MPLLockFreeLinkedListNode *))predicate condition:(MPLBoolean *(^)(void))condition __attribute__((swift_name("addLastIfPrevAndIf(node:predicate:condition:)")));
- (BOOL)addOneIfEmptyNode:(MPLLockFreeLinkedListNode *)node __attribute__((swift_name("addOneIfEmpty(node:)")));
- (MPLLockFreeLinkedListNodeAddLastDesc<MPLLockFreeLinkedListNode *> *)describeAddLastNode:(MPLLockFreeLinkedListNode *)node __attribute__((swift_name("describeAddLast(node:)")));
- (MPLLockFreeLinkedListNodeRemoveFirstDesc<MPLLockFreeLinkedListNode *> *)describeRemoveFirst __attribute__((swift_name("describeRemoveFirst()")));
- (void)helpRemove __attribute__((swift_name("helpRemove()")));
- (MPLLockFreeLinkedListNode * _Nullable)nextIfRemoved __attribute__((swift_name("nextIfRemoved()")));
- (BOOL)remove __attribute__((swift_name("remove()")));
- (id _Nullable)removeFirstIfIsInstanceOfOrPeekIfPredicate:(MPLBoolean *(^)(id _Nullable))predicate __attribute__((swift_name("removeFirstIfIsInstanceOfOrPeekIf(predicate:)")));
- (MPLLockFreeLinkedListNode * _Nullable)removeFirstOrNull __attribute__((swift_name("removeFirstOrNull()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) BOOL isRemoved __attribute__((swift_name("isRemoved")));
@property (readonly, getter=next_) id _Nullable next __attribute__((swift_name("next")));
@property (readonly) MPLLockFreeLinkedListNode *nextNode __attribute__((swift_name("nextNode")));
@property (readonly) MPLLockFreeLinkedListNode *prevNode __attribute__((swift_name("prevNode")));
@end;

__attribute__((swift_name("LockFreeLinkedListHead")))
@interface MPLLockFreeLinkedListHead : MPLLockFreeLinkedListNode
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (void)forEachBlock:(void (^)(MPLLockFreeLinkedListNode *))block __attribute__((swift_name("forEach(block:)")));
- (MPLLockFreeLinkedListNode * _Nullable)nextIfRemoved __attribute__((swift_name("nextIfRemoved()")));
- (BOOL)remove __attribute__((swift_name("remove()")));
@property (readonly) BOOL isEmpty __attribute__((swift_name("isEmpty")));
@property (readonly) BOOL isRemoved __attribute__((swift_name("isRemoved")));
@end;

__attribute__((swift_name("LockFreeLinkedListNode.AbstractAtomicDesc")))
@interface MPLLockFreeLinkedListNodeAbstractAtomicDesc : MPLAtomicDesc
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (void)completeOp:(MPLAtomicOp<id> *)op failure:(id _Nullable)failure __attribute__((swift_name("complete(op:failure:)")));
- (id _Nullable)failureAffected:(MPLLockFreeLinkedListNode * _Nullable)affected __attribute__((swift_name("failure(affected:)")));
- (void)finishOnSuccessAffected:(MPLLockFreeLinkedListNode *)affected next:(MPLLockFreeLinkedListNode *)next __attribute__((swift_name("finishOnSuccess(affected:next:)")));
- (void)finishPreparePrepareOp:(MPLLockFreeLinkedListNodePrepareOp *)prepareOp __attribute__((swift_name("finishPrepare(prepareOp:)")));
- (id _Nullable)onPreparePrepareOp:(MPLLockFreeLinkedListNodePrepareOp *)prepareOp __attribute__((swift_name("onPrepare(prepareOp:)")));
- (void)onRemovedAffected:(MPLLockFreeLinkedListNode *)affected __attribute__((swift_name("onRemoved(affected:)")));
- (id _Nullable)prepareOp:(MPLAtomicOp<id> *)op __attribute__((swift_name("prepare(op:)")));
- (BOOL)retryAffected:(MPLLockFreeLinkedListNode *)affected next:(id)next __attribute__((swift_name("retry(affected:next:)")));
- (MPLLockFreeLinkedListNode * _Nullable)takeAffectedNodeOp:(MPLOpDescriptor *)op __attribute__((swift_name("takeAffectedNode(op:)")));
- (id)updatedNextAffected:(MPLLockFreeLinkedListNode *)affected next:(MPLLockFreeLinkedListNode *)next __attribute__((swift_name("updatedNext(affected:next:)")));
@property (readonly) MPLLockFreeLinkedListNode * _Nullable affectedNode __attribute__((swift_name("affectedNode")));
@property (readonly) MPLLockFreeLinkedListNode * _Nullable originalNext __attribute__((swift_name("originalNext")));
@end;

__attribute__((swift_name("LockFreeLinkedListNodeAddLastDesc")))
@interface MPLLockFreeLinkedListNodeAddLastDesc<T> : MPLLockFreeLinkedListNodeAbstractAtomicDesc
- (instancetype)initWithQueue:(MPLLockFreeLinkedListNode *)queue node:(T)node __attribute__((swift_name("init(queue:node:)"))) __attribute__((objc_designated_initializer));
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
+ (instancetype)new __attribute__((unavailable));
- (void)finishOnSuccessAffected:(MPLLockFreeLinkedListNode *)affected next:(MPLLockFreeLinkedListNode *)next __attribute__((swift_name("finishOnSuccess(affected:next:)")));
- (void)finishPreparePrepareOp:(MPLLockFreeLinkedListNodePrepareOp *)prepareOp __attribute__((swift_name("finishPrepare(prepareOp:)")));
- (BOOL)retryAffected:(MPLLockFreeLinkedListNode *)affected next:(id)next __attribute__((swift_name("retry(affected:next:)")));
- (MPLLockFreeLinkedListNode * _Nullable)takeAffectedNodeOp:(MPLOpDescriptor *)op __attribute__((swift_name("takeAffectedNode(op:)")));
- (id)updatedNextAffected:(MPLLockFreeLinkedListNode *)affected next:(MPLLockFreeLinkedListNode *)next __attribute__((swift_name("updatedNext(affected:next:)")));
@property (readonly) MPLLockFreeLinkedListNode * _Nullable affectedNode __attribute__((swift_name("affectedNode")));
@property (readonly) T node __attribute__((swift_name("node")));
@property (readonly) MPLLockFreeLinkedListNode *originalNext __attribute__((swift_name("originalNext")));
@property (readonly) MPLLockFreeLinkedListNode *queue __attribute__((swift_name("queue")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("LockFreeLinkedListNode.PrepareOp")))
@interface MPLLockFreeLinkedListNodePrepareOp : MPLOpDescriptor
- (instancetype)initWithAffected:(MPLLockFreeLinkedListNode *)affected next:(MPLLockFreeLinkedListNode *)next desc:(MPLLockFreeLinkedListNodeAbstractAtomicDesc *)desc __attribute__((swift_name("init(affected:next:desc:)"))) __attribute__((objc_designated_initializer));
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
+ (instancetype)new __attribute__((unavailable));
- (void)finishPrepare __attribute__((swift_name("finishPrepare()")));
- (id _Nullable)performAffected:(id _Nullable)affected __attribute__((swift_name("perform(affected:)")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) MPLLockFreeLinkedListNode *affected __attribute__((swift_name("affected")));
@property (readonly) MPLAtomicOp<id> *atomicOp __attribute__((swift_name("atomicOp")));
@property (readonly) MPLLockFreeLinkedListNodeAbstractAtomicDesc *desc __attribute__((swift_name("desc")));
@property (readonly) MPLLockFreeLinkedListNode *next __attribute__((swift_name("next")));
@end;

__attribute__((swift_name("LockFreeLinkedListNodeRemoveFirstDesc")))
@interface MPLLockFreeLinkedListNodeRemoveFirstDesc<T> : MPLLockFreeLinkedListNodeAbstractAtomicDesc
- (instancetype)initWithQueue:(MPLLockFreeLinkedListNode *)queue __attribute__((swift_name("init(queue:)"))) __attribute__((objc_designated_initializer));
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
+ (instancetype)new __attribute__((unavailable));
- (id _Nullable)failureAffected:(MPLLockFreeLinkedListNode * _Nullable)affected __attribute__((swift_name("failure(affected:)")));
- (void)finishOnSuccessAffected:(MPLLockFreeLinkedListNode *)affected next:(MPLLockFreeLinkedListNode *)next __attribute__((swift_name("finishOnSuccess(affected:next:)")));
- (void)finishPreparePrepareOp:(MPLLockFreeLinkedListNodePrepareOp *)prepareOp __attribute__((swift_name("finishPrepare(prepareOp:)")));
- (BOOL)retryAffected:(MPLLockFreeLinkedListNode *)affected next:(id)next __attribute__((swift_name("retry(affected:next:)")));
- (MPLLockFreeLinkedListNode * _Nullable)takeAffectedNodeOp:(MPLOpDescriptor *)op __attribute__((swift_name("takeAffectedNode(op:)")));
- (id)updatedNextAffected:(MPLLockFreeLinkedListNode *)affected next:(MPLLockFreeLinkedListNode *)next __attribute__((swift_name("updatedNext(affected:next:)")));
@property (readonly) MPLLockFreeLinkedListNode * _Nullable affectedNode __attribute__((swift_name("affectedNode")));
@property (readonly) MPLLockFreeLinkedListNode * _Nullable originalNext __attribute__((swift_name("originalNext")));
@property (readonly) MPLLockFreeLinkedListNode *queue __attribute__((swift_name("queue")));
@property (readonly) T _Nullable result __attribute__((swift_name("result")));
@end;

__attribute__((swift_name("MainDispatcherFactory")))
@protocol MPLMainDispatcherFactory
@required
- (MPLMainCoroutineDispatcher *)createDispatcherAllFactories:(NSArray<id<MPLMainDispatcherFactory>> *)allFactories __attribute__((swift_name("createDispatcher(allFactories:)")));
- (NSString * _Nullable)hintOnError __attribute__((swift_name("hintOnError()")));
@property (readonly) int32_t loadPriority __attribute__((swift_name("loadPriority")));
@end;

__attribute__((swift_name("AtomicfuSynchronizedObject")))
@interface MPLAtomicfuSynchronizedObject : MPLBase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (void)lock __attribute__((swift_name("lock()")));
- (BOOL)tryLock __attribute__((swift_name("tryLock()")));
- (void)unlock __attribute__((swift_name("unlock()")));
@property (readonly, getter=lock_) MPLKotlinAtomicReference<MPLAtomicfuSynchronizedObjectLockState *> *lock __attribute__((swift_name("lock")));
@end;

__attribute__((swift_name("ThreadSafeHeap")))
@interface MPLThreadSafeHeap<T> : MPLAtomicfuSynchronizedObject
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (void)addLastNode:(T)node __attribute__((swift_name("addLast(node:)")));
- (BOOL)addLastIfNode:(T)node cond:(MPLBoolean *(^)(T _Nullable))cond __attribute__((swift_name("addLastIf(node:cond:)")));
- (void)clear __attribute__((swift_name("clear()")));
- (T _Nullable)peek __attribute__((swift_name("peek()")));
- (BOOL)removeNode:(T)node __attribute__((swift_name("remove(node:)")));
- (T _Nullable)removeFirstIfPredicate:(MPLBoolean *(^)(T))predicate __attribute__((swift_name("removeFirstIf(predicate:)")));
- (T _Nullable)removeFirstOrNull __attribute__((swift_name("removeFirstOrNull()")));
@property (readonly) BOOL isEmpty __attribute__((swift_name("isEmpty")));
@property (readonly) int32_t size __attribute__((swift_name("size")));
@end;

__attribute__((swift_name("ThreadSafeHeapNode")))
@protocol MPLThreadSafeHeapNode
@required
@property MPLThreadSafeHeap<id> * _Nullable heap __attribute__((swift_name("heap")));
@property int32_t index __attribute__((swift_name("index")));
@end;

__attribute__((swift_name("Mutex")))
@protocol MPLMutex
@required
- (BOOL)holdsLockOwner:(id)owner __attribute__((swift_name("holdsLock(owner:)")));

/**
 @note This method converts instances of CancellationException to errors.
 Other uncaught Kotlin exceptions are fatal.
*/
- (void)lockOwner:(id _Nullable)owner completionHandler:(void (^)(MPLKotlinUnit * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("lock(owner:completionHandler:)")));
- (BOOL)tryLockOwner:(id _Nullable)owner __attribute__((swift_name("tryLock(owner:)")));
- (void)unlockOwner:(id _Nullable)owner __attribute__((swift_name("unlock(owner:)")));
@property (readonly) BOOL isLocked __attribute__((swift_name("isLocked")));
@property (readonly) id<MPLSelectClause2> onLock __attribute__((swift_name("onLock"))) __attribute__((deprecated("Mutex.onLock deprecated without replacement. For additional details please refer to #2794")));
@end;

__attribute__((swift_name("Semaphore")))
@protocol MPLSemaphore
@required

/**
 @note This method converts instances of CancellationException to errors.
 Other uncaught Kotlin exceptions are fatal.
*/
- (void)acquireWithCompletionHandler:(void (^)(MPLKotlinUnit * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("acquire(completionHandler:)")));
- (void)release_ __attribute__((swift_name("release()")));
- (BOOL)tryAcquire __attribute__((swift_name("tryAcquire()")));
@property (readonly) int32_t availablePermits __attribute__((swift_name("availablePermits")));
@end;

__attribute__((swift_name("IDataProvider")))
@protocol MPLIDataProvider
@required
- (id _Nullable)getData __attribute__((swift_name("getData()")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CDataProvider")))
@interface MPLCDataProvider<T> : MPLBase <MPLIDataProvider>
- (instancetype)initWithData:(T _Nullable)data __attribute__((swift_name("init(data:)"))) __attribute__((objc_designated_initializer));
- (T _Nullable)getData __attribute__((swift_name("getData()")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CFlow")))
@interface MPLCFlow<T> : MPLBase <MPLStateFlow>
- (instancetype)initWithStateFlow:(id<MPLStateFlow>)stateFlow __attribute__((swift_name("init(stateFlow:)"))) __attribute__((objc_designated_initializer));

/**
 @note This method converts instances of CancellationException to errors.
 Other uncaught Kotlin exceptions are fatal.
*/
- (void)collectCollector:(id<MPLFlowCollector>)collector completionHandler:(void (^)(MPLKotlinNothing * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("collect(collector:completionHandler:)")));
@property (readonly) NSArray<id> *replayCache __attribute__((swift_name("replayCache")));
@property (readonly) T _Nullable value __attribute__((swift_name("value")));
@end;

__attribute__((swift_name("Closeable")))
@protocol MPLCloseable
@required
@end;

__attribute__((swift_name("ExcludedSealed")))
@protocol MPLExcludedSealed
@required
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ExcludedSealedV1")))
@interface MPLExcludedSealedV1 : MPLBase <MPLExcludedSealed>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)v1 __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) MPLExcludedSealedV1 *shared __attribute__((swift_name("shared")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ExcludedSealedV2")))
@interface MPLExcludedSealedV2 : MPLBase <MPLExcludedSealed>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)v2 __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) MPLExcludedSealedV2 *shared __attribute__((swift_name("shared")));
@end;

__attribute__((swift_name("GenericSealedClass")))
@interface MPLGenericSealedClass<__covariant T, __covariant U> : MPLBase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("GenericSealedClassWithOnePropertyT")))
@interface MPLGenericSealedClassWithOnePropertyT<T> : MPLGenericSealedClass<T, MPLKotlinNothing *>
- (instancetype)initWithValue:(T _Nullable)value __attribute__((swift_name("init(value:)"))) __attribute__((objc_designated_initializer));
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
+ (instancetype)new __attribute__((unavailable));
- (T _Nullable)component1 __attribute__((swift_name("component1()")));
- (MPLGenericSealedClassWithOnePropertyT<T> *)doCopyValue:(T _Nullable)value __attribute__((swift_name("doCopy(value:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) T _Nullable value __attribute__((swift_name("value")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("GenericSealedClassWithOnePropertyU")))
@interface MPLGenericSealedClassWithOnePropertyU<U> : MPLGenericSealedClass<MPLKotlinNothing *, U>
- (instancetype)initWithValue:(U _Nullable)value __attribute__((swift_name("init(value:)"))) __attribute__((objc_designated_initializer));
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
+ (instancetype)new __attribute__((unavailable));
- (U _Nullable)component1 __attribute__((swift_name("component1()")));
- (MPLGenericSealedClassWithOnePropertyU<U> *)doCopyValue:(U _Nullable)value __attribute__((swift_name("doCopy(value:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) U _Nullable value __attribute__((swift_name("value")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("GenericSealedClassWithTwoProperties")))
@interface MPLGenericSealedClassWithTwoProperties<T, U> : MPLGenericSealedClass<T, U>
- (instancetype)initWithValue1:(T _Nullable)value1 value2:(U _Nullable)value2 __attribute__((swift_name("init(value1:value2:)"))) __attribute__((objc_designated_initializer));
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
+ (instancetype)new __attribute__((unavailable));
- (T _Nullable)component1 __attribute__((swift_name("component1()")));
- (U _Nullable)component2 __attribute__((swift_name("component2()")));
- (MPLGenericSealedClassWithTwoProperties<T, U> *)doCopyValue1:(T _Nullable)value1 value2:(U _Nullable)value2 __attribute__((swift_name("doCopy(value1:value2:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) T _Nullable value1 __attribute__((swift_name("value1")));
@property (readonly) U _Nullable value2 __attribute__((swift_name("value2")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("GenericSealedClassWithoutProperty")))
@interface MPLGenericSealedClassWithoutProperty : MPLGenericSealedClass<MPLKotlinNothing *, MPLKotlinNothing *>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
+ (instancetype)new __attribute__((unavailable));
+ (instancetype)withoutProperty __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) MPLGenericSealedClassWithoutProperty *shared __attribute__((swift_name("shared")));
@end;

__attribute__((swift_name("InternalInsideSealedTest")))
@interface MPLInternalInsideSealedTest : MPLBase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("LiveData")))
@interface MPLLiveData<T> : MPLBase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
@end;

__attribute__((swift_name("NonGenericSealedClass")))
@interface MPLNonGenericSealedClass : MPLBase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("NonGenericSealedClass.WithProperty")))
@interface MPLNonGenericSealedClassWithProperty : MPLNonGenericSealedClass
- (instancetype)initWithValue:(NSString *)value __attribute__((swift_name("init(value:)"))) __attribute__((objc_designated_initializer));
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
+ (instancetype)new __attribute__((unavailable));
- (NSString *)component1 __attribute__((swift_name("component1()")));
- (MPLNonGenericSealedClassWithProperty *)doCopyValue:(NSString *)value __attribute__((swift_name("doCopy(value:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString *value __attribute__((swift_name("value")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("NonGenericSealedClass.WithoutProperty")))
@interface MPLNonGenericSealedClassWithoutProperty : MPLNonGenericSealedClass
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
+ (instancetype)new __attribute__((unavailable));
+ (instancetype)withoutProperty __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) MPLNonGenericSealedClassWithoutProperty *shared __attribute__((swift_name("shared")));
@end;

__attribute__((swift_name("PublicInternalInsideSealedTest")))
@interface MPLPublicInternalInsideSealedTest : MPLBase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("PublicInternalInsideSealedTest.PublicSealed")))
@interface MPLPublicInternalInsideSealedTestPublicSealed : MPLPublicInternalInsideSealedTest
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
+ (instancetype)new __attribute__((unavailable));
+ (instancetype)publicSealed __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) MPLPublicInternalInsideSealedTestPublicSealed *shared __attribute__((swift_name("shared")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("SomeClass")))
@interface MPLSomeClass : MPLBase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
@property (class, readonly, getter=companion) MPLSomeClassCompanion *companion __attribute__((swift_name("companion")));
- (void)test __attribute__((swift_name("test()")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("SomeClass.Companion")))
@interface MPLSomeClassCompanion : MPLBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) MPLSomeClassCompanion *shared __attribute__((swift_name("shared")));
@end;

__attribute__((swift_name("SomeInterface")))
@protocol MPLSomeInterface
@required
@end;

__attribute__((swift_name("Status")))
@interface MPLStatus<T> : MPLBase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("StatusFailure")))
@interface MPLStatusFailure<T> : MPLStatus<T>
- (instancetype)initWithException:(MPLKotlinException *)exception __attribute__((swift_name("init(exception:)"))) __attribute__((objc_designated_initializer));
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
+ (instancetype)new __attribute__((unavailable));
- (MPLKotlinException *)component1 __attribute__((swift_name("component1()")));
- (MPLStatusFailure<T> *)doCopyException:(MPLKotlinException *)exception __attribute__((swift_name("doCopy(exception:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) MPLKotlinException *exception __attribute__((swift_name("exception")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("StatusSuccess")))
@interface MPLStatusSuccess<T> : MPLStatus<T>
- (instancetype)initWithData:(T)data __attribute__((swift_name("init(data:)"))) __attribute__((objc_designated_initializer));
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
+ (instancetype)new __attribute__((unavailable));
- (T)component1 __attribute__((swift_name("component1()")));
- (MPLStatusSuccess<T> *)doCopyData:(T)data __attribute__((swift_name("doCopy(data:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) T data __attribute__((swift_name("data")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("TestGenericSealedClass")))
@interface MPLTestGenericSealedClass : MPLBase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
@property (readonly) MPLGenericSealedClass<NSString *, NSString *> *withOnePropertyT __attribute__((swift_name("withOnePropertyT")));
@property (readonly) MPLGenericSealedClass<NSString *, NSString *> *withOnePropertyU __attribute__((swift_name("withOnePropertyU")));
@property (readonly) MPLGenericSealedClass<NSString *, NSString *> *withTwoProperties __attribute__((swift_name("withTwoProperties")));
@property (readonly) MPLGenericSealedClass<NSString *, NSString *> *withoutProperty __attribute__((swift_name("withoutProperty")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("TestStateClassSource")))
@interface MPLTestStateClassSource : MPLBase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
@property (readonly) MPLUIStateClass<NSString *> *data __attribute__((swift_name("data")));
@property (readonly) MPLUIStateClass<NSString *> *empty __attribute__((swift_name("empty")));
@property (readonly) MPLUIStateClass<NSString *> *error __attribute__((swift_name("error")));
@property (readonly) MPLUIStateClass<NSString *> *loading __attribute__((swift_name("loading")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("TestStateSource")))
@interface MPLTestStateSource : MPLBase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
@property (readonly) id<MPLUIState> data __attribute__((swift_name("data")));
@property (readonly) id<MPLUIState> empty __attribute__((swift_name("empty")));
@property (readonly) id<MPLUIState> error __attribute__((swift_name("error")));
@property (readonly) id<MPLUIState> loading __attribute__((swift_name("loading")));
@end;

__attribute__((swift_name("UIState")))
@protocol MPLUIState
@required
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("UIStateData")))
@interface MPLUIStateData<T> : MPLBase <MPLUIState>
- (instancetype)initWithValue:(T _Nullable)value __attribute__((swift_name("init(value:)"))) __attribute__((objc_designated_initializer));
- (T _Nullable)component1 __attribute__((swift_name("component1()")));
- (MPLUIStateData<T> *)doCopyValue:(T _Nullable)value __attribute__((swift_name("doCopy(value:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) T _Nullable value __attribute__((swift_name("value")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("UIStateEmpty")))
@interface MPLUIStateEmpty : MPLBase <MPLUIState>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)empty __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) MPLUIStateEmpty *shared __attribute__((swift_name("shared")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("UIStateError")))
@interface MPLUIStateError : MPLBase <MPLUIState>
- (instancetype)initWithThrowable:(MPLKotlinThrowable *)throwable __attribute__((swift_name("init(throwable:)"))) __attribute__((objc_designated_initializer));
- (MPLKotlinThrowable *)component1 __attribute__((swift_name("component1()")));
- (MPLUIStateError *)doCopyThrowable:(MPLKotlinThrowable *)throwable __attribute__((swift_name("doCopy(throwable:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) MPLKotlinThrowable *throwable __attribute__((swift_name("throwable")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("UIStateLoading")))
@interface MPLUIStateLoading : MPLBase <MPLUIState>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)loading __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) MPLUIStateLoading *shared __attribute__((swift_name("shared")));
@end;

__attribute__((swift_name("UIStateClass")))
@interface MPLUIStateClass<__covariant T> : MPLBase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("UIStateClassData")))
@interface MPLUIStateClassData<T> : MPLUIStateClass<T>
- (instancetype)initWithValue:(T _Nullable)value __attribute__((swift_name("init(value:)"))) __attribute__((objc_designated_initializer));
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
+ (instancetype)new __attribute__((unavailable));
- (T _Nullable)component1 __attribute__((swift_name("component1()")));
- (MPLUIStateClassData<T> *)doCopyValue:(T _Nullable)value __attribute__((swift_name("doCopy(value:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) T _Nullable value __attribute__((swift_name("value")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("UIStateClassEmpty")))
@interface MPLUIStateClassEmpty : MPLUIStateClass<MPLKotlinNothing *>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
+ (instancetype)new __attribute__((unavailable));
+ (instancetype)empty __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) MPLUIStateClassEmpty *shared __attribute__((swift_name("shared")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("UIStateClassError")))
@interface MPLUIStateClassError : MPLUIStateClass<MPLKotlinNothing *>
- (instancetype)initWithThrowable:(MPLKotlinThrowable *)throwable __attribute__((swift_name("init(throwable:)"))) __attribute__((objc_designated_initializer));
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
+ (instancetype)new __attribute__((unavailable));
- (MPLKotlinThrowable *)component1 __attribute__((swift_name("component1()")));
- (MPLUIStateClassError *)doCopyThrowable:(MPLKotlinThrowable *)throwable __attribute__((swift_name("doCopy(throwable:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) MPLKotlinThrowable *throwable __attribute__((swift_name("throwable")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("UIStateClassLoading")))
@interface MPLUIStateClassLoading : MPLUIStateClass<MPLKotlinNothing *>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
+ (instancetype)new __attribute__((unavailable));
+ (instancetype)loading __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) MPLUIStateClassLoading *shared __attribute__((swift_name("shared")));
@end;

@interface MPLCoroutineDispatcher (Extensions)

/**
 @note This method converts instances of CancellationException to errors.
 Other uncaught Kotlin exceptions are fatal.
*/
- (void)invokeBlock:(id<MPLKotlinSuspendFunction1>)block completionHandler:(void (^)(id _Nullable_result, NSError * _Nullable))completionHandler __attribute__((swift_name("invoke(block:completionHandler:)")));
@end;

@interface MPLSharingStartedCompanion (Extensions)
- (id<MPLSharingStarted>)WhileSubscribedStopTimeout:(int64_t)stopTimeout replayExpiration:(int64_t)replayExpiration __attribute__((swift_name("WhileSubscribed(stopTimeout:replayExpiration:)")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("KotlinArray")))
@interface MPLKotlinArray<T> : MPLBase
+ (instancetype)arrayWithSize:(int32_t)size init:(T _Nullable (^)(MPLInt *))init __attribute__((swift_name("init(size:init:)")));
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (T _Nullable)getIndex:(int32_t)index __attribute__((swift_name("get(index:)")));
- (id<MPLKotlinIterator>)iterator __attribute__((swift_name("iterator()")));
- (void)setIndex:(int32_t)index value:(T _Nullable)value __attribute__((swift_name("set(index:value:)")));
@property (readonly) int32_t size __attribute__((swift_name("size")));
@end;

@interface MPLKotlinArray (Extensions)
- (id<MPLFlow>)asFlow __attribute__((swift_name("asFlow()")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("KotlinIntArray")))
@interface MPLKotlinIntArray : MPLBase
+ (instancetype)arrayWithSize:(int32_t)size __attribute__((swift_name("init(size:)")));
+ (instancetype)arrayWithSize:(int32_t)size init:(MPLInt *(^)(MPLInt *))init __attribute__((swift_name("init(size:init:)")));
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (int32_t)getIndex:(int32_t)index __attribute__((swift_name("get(index:)")));
- (MPLKotlinIntIterator *)iterator __attribute__((swift_name("iterator()")));
- (void)setIndex:(int32_t)index value:(int32_t)value __attribute__((swift_name("set(index:value:)")));
@property (readonly) int32_t size __attribute__((swift_name("size")));
@end;

@interface MPLKotlinIntArray (Extensions)
- (id<MPLFlow>)asFlow __attribute__((swift_name("asFlow()")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("KotlinLongArray")))
@interface MPLKotlinLongArray : MPLBase
+ (instancetype)arrayWithSize:(int32_t)size __attribute__((swift_name("init(size:)")));
+ (instancetype)arrayWithSize:(int32_t)size init:(MPLLong *(^)(MPLInt *))init __attribute__((swift_name("init(size:init:)")));
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (int64_t)getIndex:(int32_t)index __attribute__((swift_name("get(index:)")));
- (MPLKotlinLongIterator *)iterator __attribute__((swift_name("iterator()")));
- (void)setIndex:(int32_t)index value:(int64_t)value __attribute__((swift_name("set(index:value:)")));
@property (readonly) int32_t size __attribute__((swift_name("size")));
@end;

@interface MPLKotlinLongArray (Extensions)
- (id<MPLFlow>)asFlow __attribute__((swift_name("asFlow()")));
@end;

__attribute__((swift_name("KotlinIterable")))
@protocol MPLKotlinIterable
@required
- (id<MPLKotlinIterator>)iterator __attribute__((swift_name("iterator()")));
@end;

__attribute__((swift_name("KotlinIntProgression")))
@interface MPLKotlinIntProgression : MPLBase <MPLKotlinIterable>
@property (class, readonly, getter=companion) MPLKotlinIntProgressionCompanion *companion __attribute__((swift_name("companion")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (BOOL)isEmpty_ __attribute__((swift_name("isEmpty()")));
- (MPLKotlinIntIterator *)iterator __attribute__((swift_name("iterator()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) int32_t first __attribute__((swift_name("first")));
@property (readonly) int32_t last __attribute__((swift_name("last")));
@property (readonly) int32_t step __attribute__((swift_name("step")));
@end;

__attribute__((swift_name("KotlinClosedRange")))
@protocol MPLKotlinClosedRange
@required
- (BOOL)containsValue:(id)value __attribute__((swift_name("contains(value:)")));
- (BOOL)isEmpty_ __attribute__((swift_name("isEmpty()")));
@property (readonly) id endInclusive __attribute__((swift_name("endInclusive")));
@property (readonly, getter=start_) id start __attribute__((swift_name("start")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("KotlinIntRange")))
@interface MPLKotlinIntRange : MPLKotlinIntProgression <MPLKotlinClosedRange>
- (instancetype)initWithStart:(int32_t)start endInclusive:(int32_t)endInclusive __attribute__((swift_name("init(start:endInclusive:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) MPLKotlinIntRangeCompanion *companion __attribute__((swift_name("companion")));
- (BOOL)containsValue:(MPLInt *)value __attribute__((swift_name("contains(value:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (BOOL)isEmpty_ __attribute__((swift_name("isEmpty()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) MPLInt *endInclusive __attribute__((swift_name("endInclusive")));
@property (readonly, getter=start_) MPLInt *start __attribute__((swift_name("start")));
@end;

@interface MPLKotlinIntRange (Extensions)
- (id<MPLFlow>)asFlow __attribute__((swift_name("asFlow()")));
@end;

__attribute__((swift_name("KotlinLongProgression")))
@interface MPLKotlinLongProgression : MPLBase <MPLKotlinIterable>
@property (class, readonly, getter=companion) MPLKotlinLongProgressionCompanion *companion __attribute__((swift_name("companion")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (BOOL)isEmpty_ __attribute__((swift_name("isEmpty()")));
- (MPLKotlinLongIterator *)iterator __attribute__((swift_name("iterator()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) int64_t first __attribute__((swift_name("first")));
@property (readonly) int64_t last __attribute__((swift_name("last")));
@property (readonly) int64_t step __attribute__((swift_name("step")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("KotlinLongRange")))
@interface MPLKotlinLongRange : MPLKotlinLongProgression <MPLKotlinClosedRange>
- (instancetype)initWithStart:(int64_t)start endInclusive:(int64_t)endInclusive __attribute__((swift_name("init(start:endInclusive:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) MPLKotlinLongRangeCompanion *companion __attribute__((swift_name("companion")));
- (BOOL)containsValue:(MPLLong *)value __attribute__((swift_name("contains(value:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (BOOL)isEmpty_ __attribute__((swift_name("isEmpty()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) MPLLong *endInclusive __attribute__((swift_name("endInclusive")));
@property (readonly, getter=start_) MPLLong *start __attribute__((swift_name("start")));
@end;

@interface MPLKotlinLongRange (Extensions)
- (id<MPLFlow>)asFlow __attribute__((swift_name("asFlow()")));
@end;

@interface MPLSomeClassCompanion (Extensions)
- (void)extensionOnCompanion __attribute__((swift_name("extensionOnCompanion()")));
@end;

@interface MPLSomeClass (Extensions)
- (void)extensionOnKotlinClass __attribute__((swift_name("extensionOnKotlinClass()")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("KotlinIntProgression.Companion")))
@interface MPLKotlinIntProgressionCompanion : MPLBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) MPLKotlinIntProgressionCompanion *shared __attribute__((swift_name("shared")));
- (MPLKotlinIntProgression *)fromClosedRangeRangeStart:(int32_t)rangeStart rangeEnd:(int32_t)rangeEnd step:(int32_t)step __attribute__((swift_name("fromClosedRange(rangeStart:rangeEnd:step:)")));
@end;

@interface MPLKotlinIntProgressionCompanion (Extensions)
- (void)extensionOnKotlinCompanion __attribute__((swift_name("extensionOnKotlinCompanion()")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("JobKt")))
@interface MPLJobKt : MPLBase
+ (BOOL)isActive:(id<MPLKotlinCoroutineContext>)receiver __attribute__((swift_name("isActive(_:)")));
+ (id<MPLJob>)job:(id<MPLKotlinCoroutineContext>)receiver __attribute__((swift_name("job(_:)")));
+ (id<MPLCompletableJob>)JobParent:(id<MPLJob> _Nullable)parent __attribute__((swift_name("Job(parent:)")));
+ (void)cancel:(id<MPLKotlinCoroutineContext>)receiver cause:(MPLKotlinCancellationException * _Nullable)cause __attribute__((swift_name("cancel(_:cause:)")));
+ (void)cancel:(id<MPLJob>)receiver message:(NSString *)message cause:(MPLKotlinThrowable * _Nullable)cause __attribute__((swift_name("cancel(_:message:cause:)")));

/**
 @note This method converts instances of CancellationException to errors.
 Other uncaught Kotlin exceptions are fatal.
*/
+ (void)cancelAndJoin:(id<MPLJob>)receiver completionHandler:(void (^)(MPLKotlinUnit * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("cancelAndJoin(_:completionHandler:)")));
+ (void)cancelChildren:(id<MPLKotlinCoroutineContext>)receiver cause:(MPLKotlinCancellationException * _Nullable)cause __attribute__((swift_name("cancelChildren(_:cause:)")));
+ (void)cancelChildren:(id<MPLJob>)receiver cause_:(MPLKotlinCancellationException * _Nullable)cause __attribute__((swift_name("cancelChildren(_:cause_:)")));
+ (void)ensureActive:(id<MPLKotlinCoroutineContext>)receiver __attribute__((swift_name("ensureActive(_:)")));
+ (void)ensureActive_:(id<MPLJob>)receiver __attribute__((swift_name("ensureActive(__:)")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoroutineScopeKt")))
@interface MPLCoroutineScopeKt : MPLBase
+ (BOOL)isActive:(id<MPLCoroutineScope>)receiver __attribute__((swift_name("isActive(_:)")));
+ (id<MPLCoroutineScope>)CoroutineScopeContext:(id<MPLKotlinCoroutineContext>)context __attribute__((swift_name("CoroutineScope(context:)")));
+ (id<MPLCoroutineScope>)MainScope __attribute__((swift_name("MainScope()")));

/**
 @note This method converts instances of CancellationException to errors.
 Other uncaught Kotlin exceptions are fatal.
*/
+ (void)coroutineScopeBlock:(id<MPLKotlinSuspendFunction1>)block completionHandler:(void (^)(id _Nullable_result, NSError * _Nullable))completionHandler __attribute__((swift_name("coroutineScope(block:completionHandler:)")));

/**
 @note This method converts instances of CancellationException to errors.
 Other uncaught Kotlin exceptions are fatal.
*/
+ (void)currentCoroutineContextWithCompletionHandler:(void (^)(id<MPLKotlinCoroutineContext> _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("currentCoroutineContext(completionHandler:)")));
+ (void)cancel:(id<MPLCoroutineScope>)receiver message:(NSString *)message cause:(MPLKotlinThrowable * _Nullable)cause __attribute__((swift_name("cancel(_:message:cause:)")));
+ (void)cancel:(id<MPLCoroutineScope>)receiver cause:(MPLKotlinCancellationException * _Nullable)cause __attribute__((swift_name("cancel(_:cause:)")));
+ (void)ensureActive:(id<MPLCoroutineScope>)receiver __attribute__((swift_name("ensureActive(_:)")));
+ (id<MPLCoroutineScope>)plus:(id<MPLCoroutineScope>)receiver context:(id<MPLKotlinCoroutineContext>)context __attribute__((swift_name("plus(_:context:)")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CompletableDeferredKt")))
@interface MPLCompletableDeferredKt : MPLBase
+ (id<MPLCompletableDeferred>)CompletableDeferredValue:(id _Nullable)value __attribute__((swift_name("CompletableDeferred(value:)")));
+ (id<MPLCompletableDeferred>)CompletableDeferredParent:(id<MPLJob> _Nullable)parent __attribute__((swift_name("CompletableDeferred(parent:)")));
+ (BOOL)completeWith:(id<MPLCompletableDeferred>)receiver result:(id _Nullable)result __attribute__((swift_name("completeWith(_:result:)")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoroutineExceptionHandlerKt")))
@interface MPLCoroutineExceptionHandlerKt : MPLBase
+ (id<MPLCoroutineExceptionHandler>)CoroutineExceptionHandlerHandler:(void (^)(id<MPLKotlinCoroutineContext>, MPLKotlinThrowable *))handler __attribute__((swift_name("CoroutineExceptionHandler(handler:)")));
+ (void)handleCoroutineExceptionContext:(id<MPLKotlinCoroutineContext>)context exception:(MPLKotlinThrowable *)exception __attribute__((swift_name("handleCoroutineException(context:exception:)")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("RunnableKt")))
@interface MPLRunnableKt : MPLBase
+ (id<MPLRunnable>)RunnableBlock:(void (^)(void))block __attribute__((swift_name("Runnable(block:)")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("SupervisorKt")))
@interface MPLSupervisorKt : MPLBase
+ (id<MPLCompletableJob>)SupervisorJobParent:(id<MPLJob> _Nullable)parent __attribute__((swift_name("SupervisorJob(parent:)")));

/**
 @note This method converts instances of CancellationException to errors.
 Other uncaught Kotlin exceptions are fatal.
*/
+ (void)supervisorScopeBlock:(id<MPLKotlinSuspendFunction1>)block completionHandler:(void (^)(id _Nullable_result, NSError * _Nullable))completionHandler __attribute__((swift_name("supervisorScope(block:completionHandler:)")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("AwaitKt")))
@interface MPLAwaitKt : MPLBase

/**
 @note This method converts instances of CancellationException to errors.
 Other uncaught Kotlin exceptions are fatal.
*/
+ (void)awaitAllDeferreds:(MPLKotlinArray<id<MPLDeferred>> *)deferreds completionHandler:(void (^)(NSArray<id> * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("awaitAll(deferreds:completionHandler:)")));

/**
 @note This method converts instances of CancellationException to errors.
 Other uncaught Kotlin exceptions are fatal.
*/
+ (void)joinAllJobs:(MPLKotlinArray<id<MPLJob>> *)jobs completionHandler:(void (^)(MPLKotlinUnit * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("joinAll(jobs:completionHandler:)")));

/**
 @note This method converts instances of CancellationException to errors.
 Other uncaught Kotlin exceptions are fatal.
*/
+ (void)awaitAll:(id)receiver completionHandler:(void (^)(NSArray<id> * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("awaitAll(_:completionHandler:)")));

/**
 @note This method converts instances of CancellationException to errors.
 Other uncaught Kotlin exceptions are fatal.
*/
+ (void)joinAll:(id)receiver completionHandler:(void (^)(MPLKotlinUnit * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("joinAll(_:completionHandler:)")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("DelayKt")))
@interface MPLDelayKt : MPLBase

/**
 @note This method converts instances of CancellationException to errors.
 Other uncaught Kotlin exceptions are fatal.
*/
+ (void)awaitCancellationWithCompletionHandler:(void (^)(MPLKotlinNothing * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("awaitCancellation(completionHandler:)")));

/**
 @note This method converts instances of CancellationException to errors.
 Other uncaught Kotlin exceptions are fatal.
*/
+ (void)delayTimeMillis:(int64_t)timeMillis completionHandler:(void (^)(MPLKotlinUnit * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("delay(timeMillis:completionHandler:)")));

/**
 @note This method converts instances of CancellationException to errors.
 Other uncaught Kotlin exceptions are fatal.
*/
+ (void)delayDuration:(int64_t)duration completionHandler:(void (^)(MPLKotlinUnit * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("delay(duration:completionHandler:)")));
+ (id<MPLFlow>)debounce:(id<MPLFlow>)receiver timeoutMillis:(MPLLong *(^)(id _Nullable))timeoutMillis __attribute__((swift_name("debounce(_:timeoutMillis:)")));
+ (id<MPLFlow>)debounce:(id<MPLFlow>)receiver timeout:(id (^)(id _Nullable))timeout __attribute__((swift_name("debounce(_:timeout:)")));
+ (id<MPLFlow>)debounce:(id<MPLFlow>)receiver timeoutMillis_:(int64_t)timeoutMillis __attribute__((swift_name("debounce(_:timeoutMillis_:)")));
+ (id<MPLFlow>)debounce:(id<MPLFlow>)receiver timeout_:(int64_t)timeout __attribute__((swift_name("debounce(_:timeout_:)")));
+ (id<MPLFlow>)sample:(id<MPLFlow>)receiver periodMillis:(int64_t)periodMillis __attribute__((swift_name("sample(_:periodMillis:)")));
+ (id<MPLFlow>)sample:(id<MPLFlow>)receiver period:(int64_t)period __attribute__((swift_name("sample(_:period:)")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ThreadKt")))
@interface MPLThreadKt : MPLBase
+ (void)doInitMainThread __attribute__((swift_name("doInitMainThread()")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("WorkersKt")))
@interface MPLWorkersKt : MPLBase
+ (MPLCloseableCoroutineDispatcher *)doNewSingleThreadContextName:(NSString *)name __attribute__((swift_name("doNewSingleThreadContext(name:)")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("BuildersKt")))
@interface MPLBuildersKt : MPLBase
+ (id _Nullable)runBlockingContext:(id<MPLKotlinCoroutineContext>)context block:(id<MPLKotlinSuspendFunction1>)block __attribute__((swift_name("runBlocking(context:block:)")));
+ (id<MPLFlow>)callbackFlowBlock:(id<MPLKotlinSuspendFunction1>)block __attribute__((swift_name("callbackFlow(block:)")));
+ (id<MPLFlow>)channelFlowBlock:(id<MPLKotlinSuspendFunction1>)block __attribute__((swift_name("channelFlow(block:)")));
+ (id<MPLFlow>)emptyFlow __attribute__((swift_name("emptyFlow()")));
+ (id<MPLFlow>)flowBlock:(id<MPLKotlinSuspendFunction1>)block __attribute__((swift_name("flow(block:)")));
+ (id<MPLFlow>)flowOfValue:(id _Nullable)value __attribute__((swift_name("flowOf(value:)")));
+ (id<MPLFlow>)flowOfElements:(MPLKotlinArray<id> *)elements __attribute__((swift_name("flowOf(elements:)")));
+ (id<MPLFlow>)asFlow:(id _Nullable (^)(void))receiver __attribute__((swift_name("asFlow(_:)")));
+ (id<MPLFlow>)asFlow_:(id)receiver __attribute__((swift_name("asFlow(__:)")));
+ (id<MPLFlow>)asFlow__:(id<MPLKotlinIterator>)receiver __attribute__((swift_name("asFlow(___:)")));
+ (id<MPLFlow>)asFlow___:(id<MPLKotlinSequence>)receiver __attribute__((swift_name("asFlow(____:)")));
+ (id<MPLFlow>)asFlow____:(id<MPLKotlinSuspendFunction0>)receiver __attribute__((swift_name("asFlow(_____:)")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CancellableContinuationKt")))
@interface MPLCancellableContinuationKt : MPLBase

/**
 @note This method converts instances of CancellationException to errors.
 Other uncaught Kotlin exceptions are fatal.
*/
+ (void)suspendCancellableCoroutineBlock:(void (^)(id<MPLCancellableContinuation>))block completionHandler:(void (^)(id _Nullable_result, NSError * _Nullable))completionHandler __attribute__((swift_name("suspendCancellableCoroutine(block:completionHandler:)")));
+ (void)disposeOnCancellation:(id<MPLCancellableContinuation>)receiver handle:(id<MPLDisposableHandle>)handle __attribute__((swift_name("disposeOnCancellation(_:handle:)")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Builders_commonKt")))
@interface MPLBuilders_commonKt : MPLBase

/**
 @note This method converts instances of CancellationException to errors.
 Other uncaught Kotlin exceptions are fatal.
*/
+ (void)withContextContext:(id<MPLKotlinCoroutineContext>)context block:(id<MPLKotlinSuspendFunction1>)block completionHandler:(void (^)(id _Nullable_result, NSError * _Nullable))completionHandler __attribute__((swift_name("withContext(context:block:completionHandler:)")));
+ (id<MPLDeferred>)async:(id<MPLCoroutineScope>)receiver context:(id<MPLKotlinCoroutineContext>)context start:(MPLCoroutineStart *)start block:(id<MPLKotlinSuspendFunction1>)block __attribute__((swift_name("async(_:context:start:block:)")));
+ (id<MPLJob>)launch:(id<MPLCoroutineScope>)receiver context:(id<MPLKotlinCoroutineContext>)context start:(MPLCoroutineStart *)start block:(id<MPLKotlinSuspendFunction1>)block __attribute__((swift_name("launch(_:context:start:block:)")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("TimeoutKt")))
@interface MPLTimeoutKt : MPLBase

/**
 @note This method converts instances of CancellationException to errors.
 Other uncaught Kotlin exceptions are fatal.
*/
+ (void)withTimeoutTimeMillis:(int64_t)timeMillis block:(id<MPLKotlinSuspendFunction1>)block completionHandler:(void (^)(id _Nullable_result, NSError * _Nullable))completionHandler __attribute__((swift_name("withTimeout(timeMillis:block:completionHandler:)")));

/**
 @note This method converts instances of CancellationException to errors.
 Other uncaught Kotlin exceptions are fatal.
*/
+ (void)withTimeoutTimeout:(int64_t)timeout block:(id<MPLKotlinSuspendFunction1>)block completionHandler:(void (^)(id _Nullable_result, NSError * _Nullable))completionHandler __attribute__((swift_name("withTimeout(timeout:block:completionHandler:)")));

/**
 @note This method converts instances of CancellationException to errors.
 Other uncaught Kotlin exceptions are fatal.
*/
+ (void)withTimeoutOrNullTimeMillis:(int64_t)timeMillis block:(id<MPLKotlinSuspendFunction1>)block completionHandler:(void (^)(id _Nullable_result, NSError * _Nullable))completionHandler __attribute__((swift_name("withTimeoutOrNull(timeMillis:block:completionHandler:)")));

/**
 @note This method converts instances of CancellationException to errors.
 Other uncaught Kotlin exceptions are fatal.
*/
+ (void)withTimeoutOrNullTimeout:(int64_t)timeout block:(id<MPLKotlinSuspendFunction1>)block completionHandler:(void (^)(id _Nullable_result, NSError * _Nullable))completionHandler __attribute__((swift_name("withTimeoutOrNull(timeout:block:completionHandler:)")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("YieldKt")))
@interface MPLYieldKt : MPLBase

/**
 @note This method converts instances of CancellationException to errors.
 Other uncaught Kotlin exceptions are fatal.
*/
+ (void)yieldWithCompletionHandler:(void (^)(MPLKotlinUnit * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("yield(completionHandler:)")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoroutineContextKt")))
@interface MPLCoroutineContextKt : MPLBase
+ (id<MPLKotlinCoroutineContext>)doNewCoroutineContext:(id<MPLCoroutineScope>)receiver context:(id<MPLKotlinCoroutineContext>)context __attribute__((swift_name("doNewCoroutineContext(_:context:)")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CancellableKt")))
@interface MPLCancellableKt : MPLBase
+ (void)startCoroutineCancellable:(id<MPLKotlinSuspendFunction0>)receiver completion:(id<MPLKotlinContinuation>)completion __attribute__((swift_name("startCoroutineCancellable(_:completion:)")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("BroadcastChannelKt")))
@interface MPLBroadcastChannelKt : MPLBase
+ (id<MPLBroadcastChannel>)BroadcastChannelCapacity:(int32_t)capacity __attribute__((swift_name("BroadcastChannel(capacity:)")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ChannelKt")))
@interface MPLChannelKt : MPLBase
+ (id<MPLChannel>)ChannelCapacity:(int32_t)capacity onBufferOverflow:(MPLBufferOverflow *)onBufferOverflow onUndeliveredElement:(void (^ _Nullable)(id _Nullable))onUndeliveredElement __attribute__((swift_name("Channel(capacity:onBufferOverflow:onUndeliveredElement:)")));
+ (id _Nullable)getOrElse:(id _Nullable)receiver onFailure:(id _Nullable (^)(MPLKotlinThrowable * _Nullable))onFailure __attribute__((swift_name("getOrElse(_:onFailure:)")));
+ (id _Nullable)onClosed:(id _Nullable)receiver action:(void (^)(MPLKotlinThrowable * _Nullable))action __attribute__((swift_name("onClosed(_:action:)")));
+ (id _Nullable)onFailure:(id _Nullable)receiver action:(void (^)(MPLKotlinThrowable * _Nullable))action __attribute__((swift_name("onFailure(_:action:)")));
+ (id _Nullable)onSuccess:(id _Nullable)receiver action:(void (^)(id _Nullable))action __attribute__((swift_name("onSuccess(_:action:)")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ProduceKt")))
@interface MPLProduceKt : MPLBase

/**
 @note This method converts instances of CancellationException to errors.
 Other uncaught Kotlin exceptions are fatal.
*/
+ (void)awaitClose:(id<MPLProducerScope>)receiver block:(void (^)(void))block completionHandler:(void (^)(MPLKotlinUnit * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("awaitClose(_:block:completionHandler:)")));
+ (id<MPLReceiveChannel>)produce:(id<MPLCoroutineScope>)receiver context:(id<MPLKotlinCoroutineContext>)context capacity:(int32_t)capacity start:(MPLCoroutineStart *)start onCompletion:(void (^ _Nullable)(MPLKotlinThrowable * _Nullable))onCompletion block:(id<MPLKotlinSuspendFunction1>)block __attribute__((swift_name("produce(_:context:capacity:start:onCompletion:block:)")));
+ (id<MPLReceiveChannel>)produce:(id<MPLCoroutineScope>)receiver context:(id<MPLKotlinCoroutineContext>)context capacity:(int32_t)capacity block:(id<MPLKotlinSuspendFunction1>)block __attribute__((swift_name("produce(_:context:capacity:block:)")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("BroadcastKt")))
@interface MPLBroadcastKt : MPLBase
+ (id<MPLBroadcastChannel>)broadcast:(id<MPLCoroutineScope>)receiver context:(id<MPLKotlinCoroutineContext>)context capacity:(int32_t)capacity start:(MPLCoroutineStart *)start onCompletion:(void (^ _Nullable)(MPLKotlinThrowable * _Nullable))onCompletion block:(id<MPLKotlinSuspendFunction1>)block __attribute__((swift_name("broadcast(_:context:capacity:start:onCompletion:block:)")));
+ (id<MPLBroadcastChannel>)broadcast:(id<MPLReceiveChannel>)receiver capacity:(int32_t)capacity start:(MPLCoroutineStart *)start __attribute__((swift_name("broadcast(_:capacity:start:)")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Channels_commonKt")))
@interface MPLChannels_commonKt : MPLBase
+ (id _Nullable)consume:(id<MPLBroadcastChannel>)receiver block:(id _Nullable (^)(id<MPLReceiveChannel>))block __attribute__((swift_name("consume(_:block:)")));
+ (id _Nullable)consume:(id<MPLReceiveChannel>)receiver block_:(id _Nullable (^)(id<MPLReceiveChannel>))block __attribute__((swift_name("consume(_:block_:)")));

/**
 @note This method converts instances of CancellationException to errors.
 Other uncaught Kotlin exceptions are fatal.
*/
+ (void)consumeEach:(id<MPLBroadcastChannel>)receiver action:(void (^)(id _Nullable))action completionHandler:(void (^)(MPLKotlinUnit * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("consumeEach(_:action:completionHandler:)")));

/**
 @note This method converts instances of CancellationException to errors.
 Other uncaught Kotlin exceptions are fatal.
*/
+ (void)consumeEach:(id<MPLReceiveChannel>)receiver action:(void (^)(id _Nullable))action completionHandler_:(void (^)(MPLKotlinUnit * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("consumeEach(_:action:completionHandler_:)")));
+ (id<MPLSelectClause1>)onReceiveOrNull:(id<MPLReceiveChannel>)receiver __attribute__((swift_name("onReceiveOrNull(_:)"))) __attribute__((unavailable("Deprecated in the favour of 'onReceiveCatching'")));

/**
 @note This method converts instances of CancellationException to errors.
 Other uncaught Kotlin exceptions are fatal.
*/
+ (void)receiveOrNull:(id<MPLReceiveChannel>)receiver completionHandler:(void (^)(id _Nullable_result, NSError * _Nullable))completionHandler __attribute__((swift_name("receiveOrNull(_:completionHandler:)"))) __attribute__((unavailable("Deprecated in the favour of 'receiveCatching'")));

/**
 @note This method converts instances of CancellationException to errors.
 Other uncaught Kotlin exceptions are fatal.
*/
+ (void)toList:(id<MPLReceiveChannel>)receiver completionHandler:(void (^)(NSArray<id> * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("toList(_:completionHandler:)")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ChannelsKt")))
@interface MPLChannelsKt : MPLBase
+ (void)sendBlocking:(id<MPLSendChannel>)receiver element:(id _Nullable)element __attribute__((swift_name("sendBlocking(_:element:)"))) __attribute__((unavailable("Deprecated in the favour of 'trySendBlocking'. Consider handling the result of 'trySendBlocking' explicitly and rethrow exception if necessary")));
+ (id _Nullable)trySendBlocking:(id<MPLSendChannel>)receiver element:(id _Nullable)element __attribute__((swift_name("trySendBlocking(_:element:)")));
+ (id<MPLFlow>)asFlow:(id<MPLBroadcastChannel>)receiver __attribute__((swift_name("asFlow(_:)"))) __attribute__((deprecated("'BroadcastChannel' is obsolete and all corresponding operators are deprecated in the favour of StateFlow and SharedFlow")));
+ (id<MPLFlow>)consumeAsFlow:(id<MPLReceiveChannel>)receiver __attribute__((swift_name("consumeAsFlow(_:)")));

/**
 @note This method converts instances of CancellationException to errors.
 Other uncaught Kotlin exceptions are fatal.
*/
+ (void)emitAll:(id<MPLFlowCollector>)receiver channel:(id<MPLReceiveChannel>)channel completionHandler:(void (^)(MPLKotlinUnit * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("emitAll(_:channel:completionHandler:)")));
+ (id<MPLReceiveChannel>)produceIn:(id<MPLFlow>)receiver scope:(id<MPLCoroutineScope>)scope __attribute__((swift_name("produceIn(_:scope:)")));
+ (id<MPLFlow>)receiveAsFlow:(id<MPLReceiveChannel>)receiver __attribute__((swift_name("receiveAsFlow(_:)")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("MergeKt")))
@interface MPLMergeKt : MPLBase
+ (id<MPLFlow>)mergeFlows:(MPLKotlinArray<id<MPLFlow>> *)flows __attribute__((swift_name("merge(flows:)")));
+ (id<MPLFlow>)flatMapConcat:(id<MPLFlow>)receiver transform:(id<MPLKotlinSuspendFunction1>)transform __attribute__((swift_name("flatMapConcat(_:transform:)")));
+ (id<MPLFlow>)flatMapLatest:(id<MPLFlow>)receiver transform:(id<MPLKotlinSuspendFunction1>)transform __attribute__((swift_name("flatMapLatest(_:transform:)")));
+ (id<MPLFlow>)flatMapMerge:(id<MPLFlow>)receiver concurrency:(int32_t)concurrency transform:(id<MPLKotlinSuspendFunction1>)transform __attribute__((swift_name("flatMapMerge(_:concurrency:transform:)")));
+ (id<MPLFlow>)flattenConcat:(id<MPLFlow>)receiver __attribute__((swift_name("flattenConcat(_:)")));
+ (id<MPLFlow>)flattenMerge:(id<MPLFlow>)receiver concurrency:(int32_t)concurrency __attribute__((swift_name("flattenMerge(_:concurrency:)")));
+ (id<MPLFlow>)mapLatest:(id<MPLFlow>)receiver transform:(id<MPLKotlinSuspendFunction1>)transform __attribute__((swift_name("mapLatest(_:transform:)")));
+ (id<MPLFlow>)merge:(id)receiver __attribute__((swift_name("merge(_:)")));
+ (id<MPLFlow>)transformLatest:(id<MPLFlow>)receiver transform:(id<MPLKotlinSuspendFunction2>)transform __attribute__((swift_name("transformLatest(_:transform:)")));
@property (class, readonly) int32_t DEFAULT_CONCURRENCY __attribute__((swift_name("DEFAULT_CONCURRENCY")));
@property (class, readonly) NSString *DEFAULT_CONCURRENCY_PROPERTY_NAME __attribute__((swift_name("DEFAULT_CONCURRENCY_PROPERTY_NAME")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("LintKt")))
@interface MPLLintKt : MPLBase
+ (id<MPLKotlinCoroutineContext>)coroutineContext:(id<MPLFlowCollector>)receiver __attribute__((swift_name("coroutineContext(_:)"))) __attribute__((unavailable("coroutineContext is resolved into the property of outer CoroutineScope which is likely to be an error.Use currentCoroutineContext() instead or specify the receiver of coroutineContext explicitly")));
+ (BOOL)isActive:(id<MPLFlowCollector>)receiver __attribute__((swift_name("isActive(_:)"))) __attribute__((unavailable("isActive is resolved into the extension of outer CoroutineScope which is likely to be an error.Use currentCoroutineContext().isActive or cancellable() operator instead or specify the receiver of isActive explicitly. Additionally, flow {} builder emissions are cancellable by default.")));
+ (void)cancel:(id<MPLFlowCollector>)receiver cause:(MPLKotlinCancellationException * _Nullable)cause __attribute__((swift_name("cancel(_:cause:)"))) __attribute__((unavailable("cancel() is resolved into the extension of outer CoroutineScope which is likely to be an error.Use currentCoroutineContext().cancel() instead or specify the receiver of cancel() explicitly")));
+ (id<MPLFlow>)cancellable:(id<MPLSharedFlow>)receiver __attribute__((swift_name("cancellable(_:)"))) __attribute__((unavailable("Applying 'cancellable' to a SharedFlow has no effect. See the SharedFlow documentation on Operator Fusion.")));
+ (id<MPLFlow>)catch:(id<MPLSharedFlow>)receiver action:(id<MPLKotlinSuspendFunction2>)action __attribute__((swift_name("catch(_:action:)"))) __attribute__((deprecated("SharedFlow never completes, so this operator typically has not effect, it can only catch exceptions from 'onSubscribe' operator")));
+ (id<MPLFlow>)conflate:(id<MPLStateFlow>)receiver __attribute__((swift_name("conflate(_:)"))) __attribute__((unavailable("Applying 'conflate' to StateFlow has no effect. See the StateFlow documentation on Operator Fusion.")));

/**
 @note This method converts instances of CancellationException to errors.
 Other uncaught Kotlin exceptions are fatal.
*/
+ (void)count:(id<MPLSharedFlow>)receiver completionHandler:(void (^)(MPLInt * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("count(_:completionHandler:)"))) __attribute__((deprecated("SharedFlow never completes, so this terminal operation never completes.")));
+ (id<MPLFlow>)distinctUntilChanged:(id<MPLStateFlow>)receiver __attribute__((swift_name("distinctUntilChanged(_:)"))) __attribute__((unavailable("Applying 'distinctUntilChanged' to StateFlow has no effect. See the StateFlow documentation on Operator Fusion.")));
+ (id<MPLFlow>)flowOn:(id<MPLSharedFlow>)receiver context:(id<MPLKotlinCoroutineContext>)context __attribute__((swift_name("flowOn(_:context:)"))) __attribute__((unavailable("Applying 'flowOn' to SharedFlow has no effect. See the SharedFlow documentation on Operator Fusion.")));
+ (id<MPLFlow>)retry:(id<MPLSharedFlow>)receiver retries:(int64_t)retries predicate:(id<MPLKotlinSuspendFunction1>)predicate __attribute__((swift_name("retry(_:retries:predicate:)"))) __attribute__((deprecated("SharedFlow never completes, so this operator has no effect.")));
+ (id<MPLFlow>)retryWhen:(id<MPLSharedFlow>)receiver predicate:(id<MPLKotlinSuspendFunction3>)predicate __attribute__((swift_name("retryWhen(_:predicate:)"))) __attribute__((deprecated("SharedFlow never completes, so this operator has no effect.")));

/**
 @note This method converts instances of CancellationException to errors.
 Other uncaught Kotlin exceptions are fatal.
*/
+ (void)toList:(id<MPLSharedFlow>)receiver completionHandler:(void (^)(NSArray<id> * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("toList(_:completionHandler:)"))) __attribute__((deprecated("SharedFlow never completes, so this terminal operation never completes.")));

/**
 @note This method converts instances of CancellationException to errors.
 Other uncaught Kotlin exceptions are fatal.
*/
+ (void)toSet:(id<MPLSharedFlow>)receiver completionHandler:(void (^)(NSSet<id> * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("toSet(_:completionHandler:)"))) __attribute__((deprecated("SharedFlow never completes, so this terminal operation never completes.")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("SharedFlowKt")))
@interface MPLSharedFlowKt : MPLBase
+ (id<MPLMutableSharedFlow>)MutableSharedFlowReplay:(int32_t)replay extraBufferCapacity:(int32_t)extraBufferCapacity onBufferOverflow:(MPLBufferOverflow *)onBufferOverflow __attribute__((swift_name("MutableSharedFlow(replay:extraBufferCapacity:onBufferOverflow:)")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("StateFlowKt")))
@interface MPLStateFlowKt : MPLBase
+ (id<MPLMutableStateFlow>)MutableStateFlowValue:(id _Nullable)value __attribute__((swift_name("MutableStateFlow(value:)")));
+ (id _Nullable)getAndUpdate:(id<MPLMutableStateFlow>)receiver function:(id _Nullable (^)(id _Nullable))function __attribute__((swift_name("getAndUpdate(_:function:)")));
+ (void)update:(id<MPLMutableStateFlow>)receiver function:(id _Nullable (^)(id _Nullable))function __attribute__((swift_name("update(_:function:)")));
+ (id _Nullable)updateAndGet:(id<MPLMutableStateFlow>)receiver function:(id _Nullable (^)(id _Nullable))function __attribute__((swift_name("updateAndGet(_:function:)")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ZipKt")))
@interface MPLZipKt : MPLBase
+ (id<MPLFlow>)combineFlows:(MPLKotlinArray<id<MPLFlow>> *)flows transform:(id<MPLKotlinSuspendFunction1>)transform __attribute__((swift_name("combine(flows:transform:)")));
+ (id<MPLFlow>)combineFlows:(id)flows transform_:(id<MPLKotlinSuspendFunction1>)transform __attribute__((swift_name("combine(flows:transform_:)")));
+ (id<MPLFlow>)combineFlow:(id<MPLFlow>)flow flow2:(id<MPLFlow>)flow2 flow3:(id<MPLFlow>)flow3 flow4:(id<MPLFlow>)flow4 flow5:(id<MPLFlow>)flow5 transform:(id<MPLKotlinSuspendFunction5>)transform __attribute__((swift_name("combine(flow:flow2:flow3:flow4:flow5:transform:)")));
+ (id<MPLFlow>)combineFlow:(id<MPLFlow>)flow flow2:(id<MPLFlow>)flow2 flow3:(id<MPLFlow>)flow3 flow4:(id<MPLFlow>)flow4 transform:(id<MPLKotlinSuspendFunction4>)transform __attribute__((swift_name("combine(flow:flow2:flow3:flow4:transform:)")));
+ (id<MPLFlow>)combineFlow:(id<MPLFlow>)flow flow2:(id<MPLFlow>)flow2 flow3:(id<MPLFlow>)flow3 transform:(id<MPLKotlinSuspendFunction3>)transform __attribute__((swift_name("combine(flow:flow2:flow3:transform:)")));
+ (id<MPLFlow>)combineFlow:(id<MPLFlow>)flow flow2:(id<MPLFlow>)flow2 transform:(id<MPLKotlinSuspendFunction2>)transform __attribute__((swift_name("combine(flow:flow2:transform:)")));
+ (id<MPLFlow>)combineTransformFlows:(MPLKotlinArray<id<MPLFlow>> *)flows transform:(id<MPLKotlinSuspendFunction2>)transform __attribute__((swift_name("combineTransform(flows:transform:)")));
+ (id<MPLFlow>)combineTransformFlows:(id)flows transform_:(id<MPLKotlinSuspendFunction2>)transform __attribute__((swift_name("combineTransform(flows:transform_:)")));
+ (id<MPLFlow>)combineTransformFlow:(id<MPLFlow>)flow flow2:(id<MPLFlow>)flow2 flow3:(id<MPLFlow>)flow3 flow4:(id<MPLFlow>)flow4 flow5:(id<MPLFlow>)flow5 transform:(id<MPLKotlinSuspendFunction6>)transform __attribute__((swift_name("combineTransform(flow:flow2:flow3:flow4:flow5:transform:)")));
+ (id<MPLFlow>)combineTransformFlow:(id<MPLFlow>)flow flow2:(id<MPLFlow>)flow2 flow3:(id<MPLFlow>)flow3 flow4:(id<MPLFlow>)flow4 transform:(id<MPLKotlinSuspendFunction5>)transform __attribute__((swift_name("combineTransform(flow:flow2:flow3:flow4:transform:)")));
+ (id<MPLFlow>)combineTransformFlow:(id<MPLFlow>)flow flow2:(id<MPLFlow>)flow2 flow3:(id<MPLFlow>)flow3 transform:(id<MPLKotlinSuspendFunction4>)transform __attribute__((swift_name("combineTransform(flow:flow2:flow3:transform:)")));
+ (id<MPLFlow>)combineTransformFlow:(id<MPLFlow>)flow flow2:(id<MPLFlow>)flow2 transform:(id<MPLKotlinSuspendFunction3>)transform __attribute__((swift_name("combineTransform(flow:flow2:transform:)")));
+ (id<MPLFlow>)combine:(id<MPLFlow>)receiver flow:(id<MPLFlow>)flow transform:(id<MPLKotlinSuspendFunction2>)transform __attribute__((swift_name("combine(_:flow:transform:)")));
+ (id<MPLFlow>)combineTransform:(id<MPLFlow>)receiver flow:(id<MPLFlow>)flow transform:(id<MPLKotlinSuspendFunction3>)transform __attribute__((swift_name("combineTransform(_:flow:transform:)")));
+ (id<MPLFlow>)zip:(id<MPLFlow>)receiver other:(id<MPLFlow>)other transform:(id<MPLKotlinSuspendFunction2>)transform __attribute__((swift_name("zip(_:other:transform:)")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ShareKt")))
@interface MPLShareKt : MPLBase
+ (id<MPLSharedFlow>)asSharedFlow:(id<MPLMutableSharedFlow>)receiver __attribute__((swift_name("asSharedFlow(_:)")));
+ (id<MPLStateFlow>)asStateFlow:(id<MPLMutableStateFlow>)receiver __attribute__((swift_name("asStateFlow(_:)")));
+ (id<MPLSharedFlow>)onSubscription:(id<MPLSharedFlow>)receiver action:(id<MPLKotlinSuspendFunction1>)action __attribute__((swift_name("onSubscription(_:action:)")));
+ (id<MPLSharedFlow>)shareIn:(id<MPLFlow>)receiver scope:(id<MPLCoroutineScope>)scope started:(id<MPLSharingStarted>)started replay:(int32_t)replay __attribute__((swift_name("shareIn(_:scope:started:replay:)")));

/**
 @note This method converts instances of CancellationException to errors.
 Other uncaught Kotlin exceptions are fatal.
*/
+ (void)stateIn:(id<MPLFlow>)receiver scope:(id<MPLCoroutineScope>)scope completionHandler:(void (^)(id<MPLStateFlow> _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("stateIn(_:scope:completionHandler:)")));
+ (id<MPLStateFlow>)stateIn:(id<MPLFlow>)receiver scope:(id<MPLCoroutineScope>)scope started:(id<MPLSharingStarted>)started initialValue:(id _Nullable)initialValue __attribute__((swift_name("stateIn(_:scope:started:initialValue:)")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ContextKt")))
@interface MPLContextKt : MPLBase
+ (id<MPLFlow>)buffer:(id<MPLFlow>)receiver capacity:(int32_t)capacity onBufferOverflow:(MPLBufferOverflow *)onBufferOverflow __attribute__((swift_name("buffer(_:capacity:onBufferOverflow:)")));
+ (id<MPLFlow>)cancellable:(id<MPLFlow>)receiver __attribute__((swift_name("cancellable(_:)")));
+ (id<MPLFlow>)conflate:(id<MPLFlow>)receiver __attribute__((swift_name("conflate(_:)")));
+ (id<MPLFlow>)flowOn:(id<MPLFlow>)receiver context:(id<MPLKotlinCoroutineContext>)context __attribute__((swift_name("flowOn(_:context:)")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("MigrationKt")))
@interface MPLMigrationKt : MPLBase
+ (id<MPLFlow>)cache:(id<MPLFlow>)receiver __attribute__((swift_name("cache(_:)"))) __attribute__((unavailable("Flow analogue of 'cache()' is 'shareIn' with unlimited replay and 'started = SharingStared.Lazily' argument'")));
+ (id<MPLFlow>)combineLatest:(id<MPLFlow>)receiver other:(id<MPLFlow>)other other2:(id<MPLFlow>)other2 other3:(id<MPLFlow>)other3 other4:(id<MPLFlow>)other4 transform:(id<MPLKotlinSuspendFunction5>)transform __attribute__((swift_name("combineLatest(_:other:other2:other3:other4:transform:)"))) __attribute__((unavailable("Flow analogue of 'combineLatest' is 'combine'")));
+ (id<MPLFlow>)combineLatest:(id<MPLFlow>)receiver other:(id<MPLFlow>)other other2:(id<MPLFlow>)other2 other3:(id<MPLFlow>)other3 transform:(id<MPLKotlinSuspendFunction4>)transform __attribute__((swift_name("combineLatest(_:other:other2:other3:transform:)"))) __attribute__((unavailable("Flow analogue of 'combineLatest' is 'combine'")));
+ (id<MPLFlow>)combineLatest:(id<MPLFlow>)receiver other:(id<MPLFlow>)other other2:(id<MPLFlow>)other2 transform:(id<MPLKotlinSuspendFunction3>)transform __attribute__((swift_name("combineLatest(_:other:other2:transform:)"))) __attribute__((unavailable("Flow analogue of 'combineLatest' is 'combine'")));
+ (id<MPLFlow>)combineLatest:(id<MPLFlow>)receiver other:(id<MPLFlow>)other transform:(id<MPLKotlinSuspendFunction2>)transform __attribute__((swift_name("combineLatest(_:other:transform:)"))) __attribute__((unavailable("Flow analogue of 'combineLatest' is 'combine'")));
+ (id<MPLFlow>)compose:(id<MPLFlow>)receiver transformer:(id<MPLFlow> (^)(id<MPLFlow>))transformer __attribute__((swift_name("compose(_:transformer:)"))) __attribute__((unavailable("Flow analogue of 'compose' is 'let'")));
+ (id<MPLFlow>)concatMap:(id<MPLFlow>)receiver mapper:(id<MPLFlow> (^)(id _Nullable))mapper __attribute__((swift_name("concatMap(_:mapper:)"))) __attribute__((unavailable("Flow analogue of 'concatMap' is 'flatMapConcat'")));
+ (id<MPLFlow>)concatWith:(id<MPLFlow>)receiver value:(id _Nullable)value __attribute__((swift_name("concatWith(_:value:)"))) __attribute__((unavailable("Flow analogue of 'concatWith' is 'onCompletion'. Use 'onCompletion { emit(value) }'")));
+ (id<MPLFlow>)concatWith:(id<MPLFlow>)receiver other:(id<MPLFlow>)other __attribute__((swift_name("concatWith(_:other:)"))) __attribute__((unavailable("Flow analogue of 'concatWith' is 'onCompletion'. Use 'onCompletion { if (it == null) emitAll(other) }'")));
+ (id<MPLFlow>)delayEach:(id<MPLFlow>)receiver timeMillis:(int64_t)timeMillis __attribute__((swift_name("delayEach(_:timeMillis:)"))) __attribute__((unavailable("Use 'onEach { delay(timeMillis) }'")));
+ (id<MPLFlow>)delayFlow:(id<MPLFlow>)receiver timeMillis:(int64_t)timeMillis __attribute__((swift_name("delayFlow(_:timeMillis:)"))) __attribute__((unavailable("Use 'onStart { delay(timeMillis) }'")));
+ (id<MPLFlow>)flatMap:(id<MPLFlow>)receiver mapper:(id<MPLKotlinSuspendFunction1>)mapper __attribute__((swift_name("flatMap(_:mapper:)"))) __attribute__((unavailable("Flow analogue is 'flatMapConcat'")));
+ (id<MPLFlow>)flatten:(id<MPLFlow>)receiver __attribute__((swift_name("flatten(_:)"))) __attribute__((unavailable("Flow analogue of 'flatten' is 'flattenConcat'")));
+ (void)forEach:(id<MPLFlow>)receiver action:(id<MPLKotlinSuspendFunction1>)action __attribute__((swift_name("forEach(_:action:)"))) __attribute__((unavailable("Flow analogue of 'forEach' is 'collect'")));
+ (id<MPLFlow>)merge:(id<MPLFlow>)receiver __attribute__((swift_name("merge(_:)"))) __attribute__((unavailable("Flow analogue of 'merge' is 'flattenConcat'")));
+ (id<MPLFlow>)observeOn:(id<MPLFlow>)receiver context:(id<MPLKotlinCoroutineContext>)context __attribute__((swift_name("observeOn(_:context:)"))) __attribute__((unavailable("Collect flow in the desired context instead")));
+ (id<MPLFlow>)onErrorResume:(id<MPLFlow>)receiver fallback:(id<MPLFlow>)fallback __attribute__((swift_name("onErrorResume(_:fallback:)"))) __attribute__((unavailable("Flow analogue of 'onErrorXxx' is 'catch'. Use 'catch { emitAll(fallback) }'")));
+ (id<MPLFlow>)onErrorResumeNext:(id<MPLFlow>)receiver fallback:(id<MPLFlow>)fallback __attribute__((swift_name("onErrorResumeNext(_:fallback:)"))) __attribute__((unavailable("Flow analogue of 'onErrorXxx' is 'catch'. Use 'catch { emitAll(fallback) }'")));
+ (id<MPLFlow>)onErrorReturn:(id<MPLFlow>)receiver fallback:(id _Nullable)fallback __attribute__((swift_name("onErrorReturn(_:fallback:)"))) __attribute__((unavailable("Flow analogue of 'onErrorXxx' is 'catch'. Use 'catch { emit(fallback) }'")));
+ (id<MPLFlow>)onErrorReturn:(id<MPLFlow>)receiver fallback:(id _Nullable)fallback predicate:(MPLBoolean *(^)(MPLKotlinThrowable *))predicate __attribute__((swift_name("onErrorReturn(_:fallback:predicate:)"))) __attribute__((unavailable("Flow analogue of 'onErrorXxx' is 'catch'. Use 'catch { e -> if (predicate(e)) emit(fallback) else throw e }'")));
+ (id<MPLFlow>)publish:(id<MPLFlow>)receiver __attribute__((swift_name("publish(_:)"))) __attribute__((unavailable("Flow analogue of 'publish()' is 'shareIn'. \npublish().connect() is the default strategy (no extra call is needed), \npublish().autoConnect() translates to 'started = SharingStared.Lazily' argument, \npublish().refCount() translates to 'started = SharingStared.WhileSubscribed()' argument.")));
+ (id<MPLFlow>)publish:(id<MPLFlow>)receiver bufferSize:(int32_t)bufferSize __attribute__((swift_name("publish(_:bufferSize:)"))) __attribute__((unavailable("Flow analogue of 'publish(bufferSize)' is 'buffer' followed by 'shareIn'. \npublish().connect() is the default strategy (no extra call is needed), \npublish().autoConnect() translates to 'started = SharingStared.Lazily' argument, \npublish().refCount() translates to 'started = SharingStared.WhileSubscribed()' argument.")));
+ (id<MPLFlow>)publishOn:(id<MPLFlow>)receiver context:(id<MPLKotlinCoroutineContext>)context __attribute__((swift_name("publishOn(_:context:)"))) __attribute__((unavailable("Collect flow in the desired context instead")));
+ (id<MPLFlow>)replay:(id<MPLFlow>)receiver __attribute__((swift_name("replay(_:)"))) __attribute__((unavailable("Flow analogue of 'replay()' is 'shareIn' with unlimited replay. \nreplay().connect() is the default strategy (no extra call is needed), \nreplay().autoConnect() translates to 'started = SharingStared.Lazily' argument, \nreplay().refCount() translates to 'started = SharingStared.WhileSubscribed()' argument.")));
+ (id<MPLFlow>)replay:(id<MPLFlow>)receiver bufferSize:(int32_t)bufferSize __attribute__((swift_name("replay(_:bufferSize:)"))) __attribute__((unavailable("Flow analogue of 'replay(bufferSize)' is 'shareIn' with the specified replay parameter. \nreplay().connect() is the default strategy (no extra call is needed), \nreplay().autoConnect() translates to 'started = SharingStared.Lazily' argument, \nreplay().refCount() translates to 'started = SharingStared.WhileSubscribed()' argument.")));
+ (id<MPLFlow>)scanFold:(id<MPLFlow>)receiver initial:(id _Nullable)initial operation:(id<MPLKotlinSuspendFunction2>)operation __attribute__((swift_name("scanFold(_:initial:operation:)"))) __attribute__((unavailable("Flow has less verbose 'scan' shortcut")));
+ (id<MPLFlow>)scanReduce:(id<MPLFlow>)receiver operation:(id<MPLKotlinSuspendFunction2>)operation __attribute__((swift_name("scanReduce(_:operation:)"))) __attribute__((unavailable("'scanReduce' was renamed to 'runningReduce' to be consistent with Kotlin standard library")));
+ (id<MPLFlow>)skip:(id<MPLFlow>)receiver count:(int32_t)count __attribute__((swift_name("skip(_:count:)"))) __attribute__((unavailable("Flow analogue of 'skip' is 'drop'")));
+ (id<MPLFlow>)startWith:(id<MPLFlow>)receiver value:(id _Nullable)value __attribute__((swift_name("startWith(_:value:)"))) __attribute__((unavailable("Flow analogue of 'startWith' is 'onStart'. Use 'onStart { emit(value) }'")));
+ (id<MPLFlow>)startWith:(id<MPLFlow>)receiver other:(id<MPLFlow>)other __attribute__((swift_name("startWith(_:other:)"))) __attribute__((unavailable("Flow analogue of 'startWith' is 'onStart'. Use 'onStart { emitAll(other) }'")));
+ (void)subscribe:(id<MPLFlow>)receiver __attribute__((swift_name("subscribe(_:)"))) __attribute__((unavailable("Use 'launchIn' with 'onEach', 'onCompletion' and 'catch' instead")));
+ (void)subscribe:(id<MPLFlow>)receiver onEach:(id<MPLKotlinSuspendFunction1>)onEach __attribute__((swift_name("subscribe(_:onEach:)"))) __attribute__((unavailable("Use 'launchIn' with 'onEach', 'onCompletion' and 'catch' instead")));
+ (void)subscribe:(id<MPLFlow>)receiver onEach:(id<MPLKotlinSuspendFunction1>)onEach onError:(id<MPLKotlinSuspendFunction1>)onError __attribute__((swift_name("subscribe(_:onEach:onError:)"))) __attribute__((unavailable("Use 'launchIn' with 'onEach', 'onCompletion' and 'catch' instead")));
+ (id<MPLFlow>)subscribeOn:(id<MPLFlow>)receiver context:(id<MPLKotlinCoroutineContext>)context __attribute__((swift_name("subscribeOn(_:context:)"))) __attribute__((unavailable("Use 'flowOn' instead")));
+ (id<MPLFlow>)switchMap:(id<MPLFlow>)receiver transform:(id<MPLKotlinSuspendFunction1>)transform __attribute__((swift_name("switchMap(_:transform:)"))) __attribute__((unavailable("Flow analogues of 'switchMap' are 'transformLatest', 'flatMapLatest' and 'mapLatest'")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ErrorsKt")))
@interface MPLErrorsKt : MPLBase
+ (id<MPLFlow>)catch:(id<MPLFlow>)receiver action:(id<MPLKotlinSuspendFunction2>)action __attribute__((swift_name("catch(_:action:)")));
+ (id<MPLFlow>)retry:(id<MPLFlow>)receiver retries:(int64_t)retries predicate:(id<MPLKotlinSuspendFunction1>)predicate __attribute__((swift_name("retry(_:retries:predicate:)")));
+ (id<MPLFlow>)retryWhen:(id<MPLFlow>)receiver predicate:(id<MPLKotlinSuspendFunction3>)predicate __attribute__((swift_name("retryWhen(_:predicate:)")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CollectKt")))
@interface MPLCollectKt : MPLBase

/**
 @note This method converts instances of CancellationException to errors.
 Other uncaught Kotlin exceptions are fatal.
*/
+ (void)collect:(id<MPLFlow>)receiver completionHandler:(void (^)(MPLKotlinUnit * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("collect(_:completionHandler:)")));

/**
 @note This method converts instances of CancellationException to errors.
 Other uncaught Kotlin exceptions are fatal.
*/
+ (void)collectIndexed:(id<MPLFlow>)receiver action:(id<MPLKotlinSuspendFunction2>)action completionHandler:(void (^)(MPLKotlinUnit * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("collectIndexed(_:action:completionHandler:)")));

/**
 @note This method converts instances of CancellationException to errors.
 Other uncaught Kotlin exceptions are fatal.
*/
+ (void)collectLatest:(id<MPLFlow>)receiver action:(id<MPLKotlinSuspendFunction1>)action completionHandler:(void (^)(MPLKotlinUnit * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("collectLatest(_:action:completionHandler:)")));

/**
 @note This method converts instances of CancellationException to errors.
 Other uncaught Kotlin exceptions are fatal.
*/
+ (void)emitAll:(id<MPLFlowCollector>)receiver flow:(id<MPLFlow>)flow completionHandler:(void (^)(MPLKotlinUnit * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("emitAll(_:flow:completionHandler:)")));
+ (id<MPLJob>)launchIn:(id<MPLFlow>)receiver scope:(id<MPLCoroutineScope>)scope __attribute__((swift_name("launchIn(_:scope:)")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CountKt")))
@interface MPLCountKt : MPLBase

/**
 @note This method converts instances of CancellationException to errors.
 Other uncaught Kotlin exceptions are fatal.
*/
+ (void)count:(id<MPLFlow>)receiver completionHandler:(void (^)(MPLInt * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("count(_:completionHandler:)")));

/**
 @note This method converts instances of CancellationException to errors.
 Other uncaught Kotlin exceptions are fatal.
*/
+ (void)count:(id<MPLFlow>)receiver predicate:(id<MPLKotlinSuspendFunction1>)predicate completionHandler:(void (^)(MPLInt * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("count(_:predicate:completionHandler:)")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("DistinctKt")))
@interface MPLDistinctKt : MPLBase
+ (id<MPLFlow>)distinctUntilChanged:(id<MPLFlow>)receiver __attribute__((swift_name("distinctUntilChanged(_:)")));
+ (id<MPLFlow>)distinctUntilChanged:(id<MPLFlow>)receiver areEquivalent:(MPLBoolean *(^)(id _Nullable, id _Nullable))areEquivalent __attribute__((swift_name("distinctUntilChanged(_:areEquivalent:)")));
+ (id<MPLFlow>)distinctUntilChangedBy:(id<MPLFlow>)receiver keySelector:(id _Nullable (^)(id _Nullable))keySelector __attribute__((swift_name("distinctUntilChangedBy(_:keySelector:)")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("LimitKt")))
@interface MPLLimitKt : MPLBase
+ (id<MPLFlow>)drop:(id<MPLFlow>)receiver count:(int32_t)count __attribute__((swift_name("drop(_:count:)")));
+ (id<MPLFlow>)dropWhile:(id<MPLFlow>)receiver predicate:(id<MPLKotlinSuspendFunction1>)predicate __attribute__((swift_name("dropWhile(_:predicate:)")));
+ (id<MPLFlow>)take:(id<MPLFlow>)receiver count:(int32_t)count __attribute__((swift_name("take(_:count:)")));
+ (id<MPLFlow>)takeWhile:(id<MPLFlow>)receiver predicate:(id<MPLKotlinSuspendFunction1>)predicate __attribute__((swift_name("takeWhile(_:predicate:)")));
+ (id<MPLFlow>)transformWhile:(id<MPLFlow>)receiver transform:(id<MPLKotlinSuspendFunction2>)transform __attribute__((swift_name("transformWhile(_:transform:)")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("TransformKt")))
@interface MPLTransformKt : MPLBase
+ (id<MPLFlow>)filter:(id<MPLFlow>)receiver predicate:(id<MPLKotlinSuspendFunction1>)predicate __attribute__((swift_name("filter(_:predicate:)")));
+ (id<MPLFlow>)filterIsInstance:(id<MPLFlow>)receiver __attribute__((swift_name("filterIsInstance(_:)")));
+ (id<MPLFlow>)filterNot:(id<MPLFlow>)receiver predicate:(id<MPLKotlinSuspendFunction1>)predicate __attribute__((swift_name("filterNot(_:predicate:)")));
+ (id<MPLFlow>)filterNotNull:(id<MPLFlow>)receiver __attribute__((swift_name("filterNotNull(_:)")));
+ (id<MPLFlow>)map:(id<MPLFlow>)receiver transform:(id<MPLKotlinSuspendFunction1>)transform __attribute__((swift_name("map(_:transform:)")));
+ (id<MPLFlow>)mapNotNull:(id<MPLFlow>)receiver transform:(id<MPLKotlinSuspendFunction1>)transform __attribute__((swift_name("mapNotNull(_:transform:)")));
+ (id<MPLFlow>)onEach:(id<MPLFlow>)receiver action:(id<MPLKotlinSuspendFunction1>)action __attribute__((swift_name("onEach(_:action:)")));
+ (id<MPLFlow>)runningFold:(id<MPLFlow>)receiver initial:(id _Nullable)initial operation:(id<MPLKotlinSuspendFunction2>)operation __attribute__((swift_name("runningFold(_:initial:operation:)")));
+ (id<MPLFlow>)runningReduce:(id<MPLFlow>)receiver operation:(id<MPLKotlinSuspendFunction2>)operation __attribute__((swift_name("runningReduce(_:operation:)")));
+ (id<MPLFlow>)scan:(id<MPLFlow>)receiver initial:(id _Nullable)initial operation:(id<MPLKotlinSuspendFunction2>)operation __attribute__((swift_name("scan(_:initial:operation:)")));
+ (id<MPLFlow>)withIndex:(id<MPLFlow>)receiver __attribute__((swift_name("withIndex(_:)")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ReduceKt")))
@interface MPLReduceKt : MPLBase

/**
 @note This method converts instances of CancellationException to errors.
 Other uncaught Kotlin exceptions are fatal.
*/
+ (void)first:(id<MPLFlow>)receiver completionHandler:(void (^)(id _Nullable_result, NSError * _Nullable))completionHandler __attribute__((swift_name("first(_:completionHandler:)")));

/**
 @note This method converts instances of CancellationException to errors.
 Other uncaught Kotlin exceptions are fatal.
*/
+ (void)first:(id<MPLFlow>)receiver predicate:(id<MPLKotlinSuspendFunction1>)predicate completionHandler:(void (^)(id _Nullable_result, NSError * _Nullable))completionHandler __attribute__((swift_name("first(_:predicate:completionHandler:)")));

/**
 @note This method converts instances of CancellationException to errors.
 Other uncaught Kotlin exceptions are fatal.
*/
+ (void)firstOrNull:(id<MPLFlow>)receiver completionHandler:(void (^)(id _Nullable_result, NSError * _Nullable))completionHandler __attribute__((swift_name("firstOrNull(_:completionHandler:)")));

/**
 @note This method converts instances of CancellationException to errors.
 Other uncaught Kotlin exceptions are fatal.
*/
+ (void)firstOrNull:(id<MPLFlow>)receiver predicate:(id<MPLKotlinSuspendFunction1>)predicate completionHandler:(void (^)(id _Nullable_result, NSError * _Nullable))completionHandler __attribute__((swift_name("firstOrNull(_:predicate:completionHandler:)")));

/**
 @note This method converts instances of CancellationException to errors.
 Other uncaught Kotlin exceptions are fatal.
*/
+ (void)fold:(id<MPLFlow>)receiver initial:(id _Nullable)initial operation:(id<MPLKotlinSuspendFunction2>)operation completionHandler:(void (^)(id _Nullable_result, NSError * _Nullable))completionHandler __attribute__((swift_name("fold(_:initial:operation:completionHandler:)")));

/**
 @note This method converts instances of CancellationException to errors.
 Other uncaught Kotlin exceptions are fatal.
*/
+ (void)last:(id<MPLFlow>)receiver completionHandler:(void (^)(id _Nullable_result, NSError * _Nullable))completionHandler __attribute__((swift_name("last(_:completionHandler:)")));

/**
 @note This method converts instances of CancellationException to errors.
 Other uncaught Kotlin exceptions are fatal.
*/
+ (void)lastOrNull:(id<MPLFlow>)receiver completionHandler:(void (^)(id _Nullable_result, NSError * _Nullable))completionHandler __attribute__((swift_name("lastOrNull(_:completionHandler:)")));

/**
 @note This method converts instances of CancellationException to errors.
 Other uncaught Kotlin exceptions are fatal.
*/
+ (void)reduce:(id<MPLFlow>)receiver operation:(id<MPLKotlinSuspendFunction2>)operation completionHandler:(void (^)(id _Nullable_result, NSError * _Nullable))completionHandler __attribute__((swift_name("reduce(_:operation:completionHandler:)")));

/**
 @note This method converts instances of CancellationException to errors.
 Other uncaught Kotlin exceptions are fatal.
*/
+ (void)single:(id<MPLFlow>)receiver completionHandler:(void (^)(id _Nullable_result, NSError * _Nullable))completionHandler __attribute__((swift_name("single(_:completionHandler:)")));

/**
 @note This method converts instances of CancellationException to errors.
 Other uncaught Kotlin exceptions are fatal.
*/
+ (void)singleOrNull:(id<MPLFlow>)receiver completionHandler:(void (^)(id _Nullable_result, NSError * _Nullable))completionHandler __attribute__((swift_name("singleOrNull(_:completionHandler:)")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("EmittersKt")))
@interface MPLEmittersKt : MPLBase
+ (id<MPLFlow>)onCompletion:(id<MPLFlow>)receiver action:(id<MPLKotlinSuspendFunction2>)action __attribute__((swift_name("onCompletion(_:action:)")));
+ (id<MPLFlow>)onEmpty:(id<MPLFlow>)receiver action:(id<MPLKotlinSuspendFunction1>)action __attribute__((swift_name("onEmpty(_:action:)")));
+ (id<MPLFlow>)onStart:(id<MPLFlow>)receiver action:(id<MPLKotlinSuspendFunction1>)action __attribute__((swift_name("onStart(_:action:)")));
+ (id<MPLFlow>)transform:(id<MPLFlow>)receiver transform:(id<MPLKotlinSuspendFunction2>)transform __attribute__((swift_name("transform(_:transform:)")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CollectionKt")))
@interface MPLCollectionKt : MPLBase

/**
 @note This method converts instances of CancellationException to errors.
 Other uncaught Kotlin exceptions are fatal.
*/
+ (void)toCollection:(id<MPLFlow>)receiver destination:(id)destination completionHandler:(void (^)(id _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("toCollection(_:destination:completionHandler:)")));

/**
 @note This method converts instances of CancellationException to errors.
 Other uncaught Kotlin exceptions are fatal.
*/
+ (void)toList:(id<MPLFlow>)receiver destination:(NSMutableArray<id> *)destination completionHandler:(void (^)(NSArray<id> * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("toList(_:destination:completionHandler:)")));

/**
 @note This method converts instances of CancellationException to errors.
 Other uncaught Kotlin exceptions are fatal.
*/
+ (void)toSet:(id<MPLFlow>)receiver destination:(MPLMutableSet<id> *)destination completionHandler:(void (^)(NSSet<id> * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("toSet(_:destination:completionHandler:)")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("SelectKt")))
@interface MPLSelectKt : MPLBase

/**
 @note This method converts instances of CancellationException to errors.
 Other uncaught Kotlin exceptions are fatal.
*/
+ (void)selectBuilder:(void (^)(id<MPLSelectBuilder>))builder completionHandler:(void (^)(id _Nullable_result, NSError * _Nullable))completionHandler __attribute__((swift_name("select(builder:completionHandler:)")));
+ (void)onTimeout:(id<MPLSelectBuilder>)receiver timeout:(int64_t)timeout block:(id<MPLKotlinSuspendFunction0>)block __attribute__((swift_name("onTimeout(_:timeout:block:)")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("SelectUnbiasedKt")))
@interface MPLSelectUnbiasedKt : MPLBase

/**
 @note This method converts instances of CancellationException to errors.
 Other uncaught Kotlin exceptions are fatal.
*/
+ (void)selectUnbiasedBuilder:(void (^)(id<MPLSelectBuilder>))builder completionHandler:(void (^)(id _Nullable_result, NSError * _Nullable))completionHandler __attribute__((swift_name("selectUnbiased(builder:completionHandler:)")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("WhileSelectKt")))
@interface MPLWhileSelectKt : MPLBase

/**
 @note This method converts instances of CancellationException to errors.
 Other uncaught Kotlin exceptions are fatal.
*/
+ (void)whileSelectBuilder:(void (^)(id<MPLSelectBuilder>))builder completionHandler:(void (^)(MPLKotlinUnit * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("whileSelect(builder:completionHandler:)")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("SynchronizedKt")))
@interface MPLSynchronizedKt : MPLBase
+ (id _Nullable)synchronizedLock:(MPLAtomicfuSynchronizedObject *)lock block:(id _Nullable (^)(void))block __attribute__((swift_name("synchronized(lock:block:)")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("DispatchedContinuationKt")))
@interface MPLDispatchedContinuationKt : MPLBase
+ (void)resumeCancellableWith:(id<MPLKotlinContinuation>)receiver result:(id _Nullable)result onCancellation:(void (^ _Nullable)(MPLKotlinThrowable *))onCancellation __attribute__((swift_name("resumeCancellableWith(_:result:onCancellation:)")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("MutexKt")))
@interface MPLMutexKt : MPLBase
+ (id<MPLMutex>)MutexLocked:(BOOL)locked __attribute__((swift_name("Mutex(locked:)")));

/**
 @note This method converts instances of CancellationException to errors.
 Other uncaught Kotlin exceptions are fatal.
*/
+ (void)withLock:(id<MPLMutex>)receiver owner:(id _Nullable)owner action:(id _Nullable (^)(void))action completionHandler:(void (^)(id _Nullable_result, NSError * _Nullable))completionHandler __attribute__((swift_name("withLock(_:owner:action:completionHandler:)")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("SemaphoreKt")))
@interface MPLSemaphoreKt : MPLBase
+ (id<MPLSemaphore>)SemaphorePermits:(int32_t)permits acquiredPermits:(int32_t)acquiredPermits __attribute__((swift_name("Semaphore(permits:acquiredPermits:)")));

/**
 @note This method converts instances of CancellationException to errors.
 Other uncaught Kotlin exceptions are fatal.
*/
+ (void)withPermit:(id<MPLSemaphore>)receiver action:(id _Nullable (^)(void))action completionHandler:(void (^)(id _Nullable_result, NSError * _Nullable))completionHandler __attribute__((swift_name("withPermit(_:action:completionHandler:)")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("StatusKt")))
@interface MPLStatusKt : MPLBase
@property (class, readonly) MPLStatus<NSString *> *failureStatus __attribute__((swift_name("failureStatus")));
@property (class, readonly) MPLStatus<NSString *> *successStatus __attribute__((swift_name("successStatus")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ExtensionsKt")))
@interface MPLExtensionsKt : MPLBase
+ (NSString *)extensionPropertyOnString:(NSString *)receiver __attribute__((swift_name("extensionPropertyOnString(_:)")));
+ (void)extensionFunctionOnString:(NSString *)receiver __attribute__((swift_name("extensionFunctionOnString(_:)")));
+ (void)extensionOnInterface:(id<MPLSomeInterface>)receiver __attribute__((swift_name("extensionOnInterface(_:)")));
+ (NSString *)extensionOnList:(NSArray<NSString *> *)receiver __attribute__((swift_name("extensionOnList(_:)")));
+ (MPLKotlinThrowable *)stringToThrowable:(NSString *)receiver __attribute__((swift_name("stringToThrowable(_:)")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("UILabelExtKt")))
@interface MPLUILabelExtKt : MPLBase
+ (id<MPLCloseable>)bindGenericAny:(UILabel *)receiver liveData:(MPLLiveData<id> *)liveData __attribute__((swift_name("bindGenericAny(_:liveData:)")));
+ (id<MPLCloseable>)bindGenericText:(UILabel *)receiver liveData:(MPLLiveData<NSString *> *)liveData __attribute__((swift_name("bindGenericText(_:liveData:)")));
+ (id<MPLCloseable>)bindText:(UILabel *)receiver liveData:(MPLLiveData<NSString *> *)liveData __attribute__((swift_name("bindText(_:liveData:)")));
+ (id<MPLCloseable>)bindText:(UILabel *)receiver liveData:(MPLLiveData<NSString *> *)liveData formatter:(NSString *(^)(NSString *))formatter __attribute__((swift_name("bindText(_:liveData:formatter:)")));
+ (void)bindText:(UILabel *)receiver coroutineScope:(id<MPLCoroutineScope>)coroutineScope flow:(MPLCFlow<NSString *> *)flow __attribute__((swift_name("bindText(_:coroutineScope:flow:)")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("PlatformExtensionsKt")))
@interface MPLPlatformExtensionsKt : MPLBase
+ (void)excludedFun:(UILabel *)receiver __attribute__((swift_name("excludedFun(_:)")));
+ (void)extensionOnPlatformCompanion:(Class)receiver __attribute__((swift_name("extensionOnPlatformCompanion(_:)")));
+ (void)fillByKotlin:(UILabel *)receiver __attribute__((swift_name("fillByKotlin(_:)")));
+ (void)fillByKotlin:(UILabel *)receiver provider:(MPLCDataProvider<NSString *> *)provider __attribute__((swift_name("fillByKotlin(_:provider:)")));
+ (void)fillByKotlin:(UILabel *)receiver provider_:(id<MPLIDataProvider>)provider __attribute__((swift_name("fillByKotlin(_:provider_:)")));
+ (void)fillByKotlin:(UILabel *)receiver text:(NSString *)text __attribute__((swift_name("fillByKotlin(_:text:)")));
+ (id<MPLCloseable>)setEventHandler:(UIControl *)receiver event:(uint64_t)event lambda:(void (^)(UIControl *))lambda __attribute__((swift_name("setEventHandler(_:event:lambda:)")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("KotlinUnit")))
@interface MPLKotlinUnit : MPLBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)unit __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) MPLKotlinUnit *shared __attribute__((swift_name("shared")));
- (NSString *)description __attribute__((swift_name("description()")));
@end;

__attribute__((swift_name("KotlinSequence")))
@protocol MPLKotlinSequence
@required
- (id<MPLKotlinIterator>)iterator __attribute__((swift_name("iterator()")));
@end;

__attribute__((swift_name("KotlinFunction")))
@protocol MPLKotlinFunction
@required
@end;

__attribute__((swift_name("KotlinSuspendFunction0")))
@protocol MPLKotlinSuspendFunction0 <MPLKotlinFunction>
@required

/**
 @note This method converts instances of CancellationException to errors.
 Other uncaught Kotlin exceptions are fatal.
*/
- (void)invokeWithCompletionHandler:(void (^)(id _Nullable_result, NSError * _Nullable))completionHandler __attribute__((swift_name("invoke(completionHandler:)")));
@end;

__attribute__((swift_name("KotlinSuspendFunction1")))
@protocol MPLKotlinSuspendFunction1 <MPLKotlinFunction>
@required

/**
 @note This method converts instances of CancellationException to errors.
 Other uncaught Kotlin exceptions are fatal.
*/
- (void)invokeP1:(id _Nullable)p1 completionHandler:(void (^)(id _Nullable_result, NSError * _Nullable))completionHandler __attribute__((swift_name("invoke(p1:completionHandler:)")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("KotlinEnumCompanion")))
@interface MPLKotlinEnumCompanion : MPLBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) MPLKotlinEnumCompanion *shared __attribute__((swift_name("shared")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("AtomicfuSynchronizedObject.LockState")))
@interface MPLAtomicfuSynchronizedObjectLockState : MPLBase
- (instancetype)initWithStatus:(MPLAtomicfuSynchronizedObjectStatus *)status nestedLocks:(int32_t)nestedLocks waiters:(int32_t)waiters ownerThreadId:(void * _Nullable)ownerThreadId mutex:(void * _Nullable)mutex __attribute__((swift_name("init(status:nestedLocks:waiters:ownerThreadId:mutex:)"))) __attribute__((objc_designated_initializer));
@property (readonly) void * _Nullable mutex __attribute__((swift_name("mutex")));
@property (readonly) int32_t nestedLocks __attribute__((swift_name("nestedLocks")));
@property (readonly) void * _Nullable ownerThreadId __attribute__((swift_name("ownerThreadId")));
@property (readonly) MPLAtomicfuSynchronizedObjectStatus *status __attribute__((swift_name("status")));
@property (readonly) int32_t waiters __attribute__((swift_name("waiters")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("KotlinAtomicReference")))
@interface MPLKotlinAtomicReference<T> : MPLBase
- (instancetype)initWithValue:(T _Nullable)value __attribute__((swift_name("init(value:)"))) __attribute__((objc_designated_initializer));
- (BOOL)compareAndSetExpected:(T _Nullable)expected new:(T _Nullable)new_ __attribute__((swift_name("compareAndSet(expected:new:)")));
- (T _Nullable)compareAndSwapExpected:(T _Nullable)expected new:(T _Nullable)new_ __attribute__((swift_name("compareAndSwap(expected:new:)")));
- (NSString *)description __attribute__((swift_name("description()")));
@property T _Nullable value __attribute__((swift_name("value")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("KotlinNothing")))
@interface MPLKotlinNothing : MPLBase
@end;

__attribute__((swift_name("KotlinIterator")))
@protocol MPLKotlinIterator
@required
- (BOOL)hasNext __attribute__((swift_name("hasNext()")));
- (id _Nullable)next __attribute__((swift_name("next()")));
@end;

__attribute__((swift_name("KotlinIntIterator")))
@interface MPLKotlinIntIterator : MPLBase <MPLKotlinIterator>
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (MPLInt *)next __attribute__((swift_name("next()")));
- (int32_t)nextInt __attribute__((swift_name("nextInt()")));
@end;

__attribute__((swift_name("KotlinLongIterator")))
@interface MPLKotlinLongIterator : MPLBase <MPLKotlinIterator>
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (MPLLong *)next __attribute__((swift_name("next()")));
- (int64_t)nextLong __attribute__((swift_name("nextLong()")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("KotlinIntRange.Companion")))
@interface MPLKotlinIntRangeCompanion : MPLBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) MPLKotlinIntRangeCompanion *shared __attribute__((swift_name("shared")));
@property (readonly) MPLKotlinIntRange *EMPTY __attribute__((swift_name("EMPTY")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("KotlinLongProgression.Companion")))
@interface MPLKotlinLongProgressionCompanion : MPLBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) MPLKotlinLongProgressionCompanion *shared __attribute__((swift_name("shared")));
- (MPLKotlinLongProgression *)fromClosedRangeRangeStart:(int64_t)rangeStart rangeEnd:(int64_t)rangeEnd step:(int64_t)step __attribute__((swift_name("fromClosedRange(rangeStart:rangeEnd:step:)")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("KotlinLongRange.Companion")))
@interface MPLKotlinLongRangeCompanion : MPLBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) MPLKotlinLongRangeCompanion *shared __attribute__((swift_name("shared")));
@property (readonly) MPLKotlinLongRange *EMPTY __attribute__((swift_name("EMPTY")));
@end;

__attribute__((swift_name("KotlinSuspendFunction2")))
@protocol MPLKotlinSuspendFunction2 <MPLKotlinFunction>
@required

/**
 @note This method converts instances of CancellationException to errors.
 Other uncaught Kotlin exceptions are fatal.
*/
- (void)invokeP1:(id _Nullable)p1 p2:(id _Nullable)p2 completionHandler:(void (^)(id _Nullable_result, NSError * _Nullable))completionHandler __attribute__((swift_name("invoke(p1:p2:completionHandler:)")));
@end;

__attribute__((swift_name("KotlinSuspendFunction3")))
@protocol MPLKotlinSuspendFunction3 <MPLKotlinFunction>
@required

/**
 @note This method converts instances of CancellationException to errors.
 Other uncaught Kotlin exceptions are fatal.
*/
- (void)invokeP1:(id _Nullable)p1 p2:(id _Nullable)p2 p3:(id _Nullable)p3 completionHandler:(void (^)(id _Nullable_result, NSError * _Nullable))completionHandler __attribute__((swift_name("invoke(p1:p2:p3:completionHandler:)")));
@end;

__attribute__((swift_name("KotlinSuspendFunction5")))
@protocol MPLKotlinSuspendFunction5 <MPLKotlinFunction>
@required

/**
 @note This method converts instances of CancellationException to errors.
 Other uncaught Kotlin exceptions are fatal.
*/
- (void)invokeP1:(id _Nullable)p1 p2:(id _Nullable)p2 p3:(id _Nullable)p3 p4:(id _Nullable)p4 p5:(id _Nullable)p5 completionHandler:(void (^)(id _Nullable_result, NSError * _Nullable))completionHandler __attribute__((swift_name("invoke(p1:p2:p3:p4:p5:completionHandler:)")));
@end;

__attribute__((swift_name("KotlinSuspendFunction4")))
@protocol MPLKotlinSuspendFunction4 <MPLKotlinFunction>
@required

/**
 @note This method converts instances of CancellationException to errors.
 Other uncaught Kotlin exceptions are fatal.
*/
- (void)invokeP1:(id _Nullable)p1 p2:(id _Nullable)p2 p3:(id _Nullable)p3 p4:(id _Nullable)p4 completionHandler:(void (^)(id _Nullable_result, NSError * _Nullable))completionHandler __attribute__((swift_name("invoke(p1:p2:p3:p4:completionHandler:)")));
@end;

__attribute__((swift_name("KotlinSuspendFunction6")))
@protocol MPLKotlinSuspendFunction6 <MPLKotlinFunction>
@required

/**
 @note This method converts instances of CancellationException to errors.
 Other uncaught Kotlin exceptions are fatal.
*/
- (void)invokeP1:(id _Nullable)p1 p2:(id _Nullable)p2 p3:(id _Nullable)p3 p4:(id _Nullable)p4 p5:(id _Nullable)p5 p6:(id _Nullable)p6 completionHandler:(void (^)(id _Nullable_result, NSError * _Nullable))completionHandler __attribute__((swift_name("invoke(p1:p2:p3:p4:p5:p6:completionHandler:)")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("AtomicfuSynchronizedObject.Status")))
@interface MPLAtomicfuSynchronizedObjectStatus : MPLKotlinEnum<MPLAtomicfuSynchronizedObjectStatus *>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)initWithName:(NSString *)name ordinal:(int32_t)ordinal __attribute__((swift_name("init(name:ordinal:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly) MPLAtomicfuSynchronizedObjectStatus *unlocked __attribute__((swift_name("unlocked")));
@property (class, readonly) MPLAtomicfuSynchronizedObjectStatus *thin __attribute__((swift_name("thin")));
@property (class, readonly) MPLAtomicfuSynchronizedObjectStatus *fat __attribute__((swift_name("fat")));
+ (MPLKotlinArray<MPLAtomicfuSynchronizedObjectStatus *> *)values __attribute__((swift_name("values()")));
@end;

#pragma pop_macro("_Nullable_result")
#pragma clang diagnostic pop
NS_ASSUME_NONNULL_END
