from django.urls import path, include
from rest_framework.routers import DefaultRouter
from .views import PatientViewSet, UserRegistrationView

router = DefaultRouter()
router.register("list", PatientViewSet)

urlpatterns = [
    path("", include(router.urls)),
    path("register/", UserRegistrationView.as_view(), name="register"),
]
